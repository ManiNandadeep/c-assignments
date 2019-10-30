/*to write my own version of strncat*/
#include<stdio.h>
#include<stdlib.h>
int mystrncmp(char s1[],char s2[],int n)
{
	int i,flag;
	for(i=0;i<n;i++)
	{
		if(*(s1+i)==*(s2+i))
			flag=0;
		else
		{
			flag=1;
			return *(s1+i)-*(s2+i);
		}
	}
	if(flag==0)
	{
		return 0;
	}
}
int main(void)
{
	char*s1;
	char*s2;
	s1=(char*)malloc(255*sizeof(char));
	s2=(char*)malloc(255*sizeof(char));
	scanf("%s %s",s1,s2);
	int result=mystrncmp(s1,s2,255);
	printf("%d",result);
	return 0;
}
