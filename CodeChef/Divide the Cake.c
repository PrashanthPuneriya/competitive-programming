#include<stdio.h>
int main()
{
	int i,n,t,sum;
	scanf("%d",&t);
	while(t--)
	{ sum=0;
		scanf("%d",&n);
		if(360%n==0)
		printf("y ");
		else
		printf("n ");
		if(n<=360)
		printf("y ");
		else
		printf("n ");
		for(i=1;i<=n;i++)
		{
			sum=sum+i;
			if(sum>360)
			break;
		}
		if(sum<=360)
		printf("y\n");
		else
		printf("n\n");
	}
}
