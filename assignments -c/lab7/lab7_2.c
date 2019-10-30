#include<stdio.h>
#include<string.h>
int strindex(char s[],char t[])
{
	int i,j,count,flag;
	char sub[strlen(t)];
	if (strlen(t)>strlen(s))
		return -1;
	else
	{
		for(i=0;i<strlen(s)-strlen(t)+1;i++)
		{
			int c=0;
			for(j=i;j<i+strlen(t);j++)
			{
				sub[c]=s[j];
				c++;
			}
			if(strcmp(sub,t)==0)
			{
				count=i;
				flag=1;
			}
		}
		if(i==strlen(s)-strlen(t)+1&&flag==1)
		{
			return count;	
		}
		if (flag!=1)
		{
			return -1;
		}
	}
	return 0;
}
int main(void)
{
	char s[]="abcabcabc";
	char t[]="abc";
	int result=strindex(s,t);
	printf("%d",result);
	return 0;
}
