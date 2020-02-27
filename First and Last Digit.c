#include<stdio.h>
int main()
{	
	int t,sum,first,last,i;

	scanf("%d",&t);
	int n[t];

	for(i=0;i<t;i++)
		scanf("%d",&n[i]);

	for(i=0;i<t;i++)
		{
		sum=0;
		last=n[i]%10;

		while(n[i]>=10)
		n[i]/=10;

		first=n[i];

		sum=last+first;
		printf("%d\n",sum);
		}
		return 0;
}