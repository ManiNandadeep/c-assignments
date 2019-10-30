/*to write my own version of strncat*/
#include<stdio.h>
#include<stdlib.h>
void mystrncat(char s1[],char s2[],int n)
{
	int i,j,k,l;
	char*final;
	final=(char*)malloc(510*sizeof(char));
	for(j=0;*(s1+j)!='\0';j++)
	{
		*(final+j)=*(s1+j);
	}
	for(k=j,l=0;k<j+n;k++,l++)
	{
		*(final+k)=*(s2+l);
	}
	printf("%s",final);

}
int main(void)
{
	char*s1;
	char*s2;
	s1=(char*)malloc(255*sizeof(char));
	s2=(char*)malloc(255*sizeof(char));
	scanf("%s %s",s1,s2);
	mystrncat(s1,s2,255);
	return 0;
}
