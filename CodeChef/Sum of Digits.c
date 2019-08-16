#include<stdio.h>
int main()
{
	int a,b[10000],c[10000],test,sum;
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		sum=0;
		
		scanf("%d",&b[i]);
		while(b[i]!=0)
		{
			c[i]=b[i]%10;
			b[i]=b[i]/10;
			sum=sum+c[i];

	 	}
		printf("%d\n",sum);
		
	}



}