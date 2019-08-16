#include<stdio.h>
#include<string.h>
int main()
{	
	int t,i,l;
	char a[27],str[105];
	scanf("%d",&t);
	scanf("%s",a);
	while(t--)
	{
		scanf("%s",str);
		l=strlen(str);
		for(i=0;i<l;i++)
		{
			if(str[i]==95)
			printf(" ");
			else if(str[i]>=97&&str[i]<=122)
			printf("%c",a[str[i]-97]);
			else if(str[i]>=65&&str[i]<=90)
			printf("%c",a[str[i]-65]-32);
			else
			printf("%c",str[i]);
		}
		printf("\n");
	}
	return 0;
}
