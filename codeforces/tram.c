#include <stdio.h>
int main()
{
	int n,k,max=0,ans;
	scanf("%d",&n);

	int a[1000],b[1000];

	for(int i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
	}	
		k=a[0];

		for(int i=0;i<n;i++)
	{
		ans=b[i]-a[i]+k;
		k=ans;
		if(k>max)
		{
		max=k
		printf("%d",k);
			}
	}		
	return 0;
}