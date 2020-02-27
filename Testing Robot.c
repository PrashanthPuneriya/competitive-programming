#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,x;
		scanf("%d%d",&n,&x);
		char str[n];
		scanf("%s",str);
		int min=x;
		int max=x;
		for(int i=0;i<strlen(str);i++)
		{
			if(str[i]=='L')
			{
				x--;
				if(min>x)
					min=x;
			}
			else
			{
				x++;
				if(max<x)
					max=x;
			}
		}
		printf("%d\n",max-min+1);

	}


}