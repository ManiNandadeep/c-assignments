/*to write my own strncpy function using dynamic memory allocation*/
#include<stdio.h>
#include<stdlib.h>
void mystrncpy(char s1[],char s2[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		*(s1+i)=*(s2+i);
	}
	for(i=n;i<255;i++)
	{
		*(s1+i)='\0';
	}
	printf("%s",s1);
}
int main(void)
{
	char *s1;
	char *s2;
	s1=(char*)malloc(255*sizeof(char));
	s2=(char*)malloc(255*sizeof(char));
	scanf("%s %s",s1,s2);
	mystrncpy(s1,s2,255);
	return 0;
}
