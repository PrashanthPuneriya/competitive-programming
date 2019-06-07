#include<stdio.h>
int main(void)
{
	int n,s[4],same,individuals,taxis,temp;

	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		scanf("%d",&s[i]);

	}

			/*Desced=nding order by swapping*/
	for(int j=0;j<n-1;j++)
	{
					for(int i=0;i<n;i++)
				{		
					if(s[i]>s[i++])
					temp=s[i];
					s[i]=s[i++];
					s[i++]=temp;
				
				}	
			}
	for(int i=0;i<n;i++)
		printf("%d\n",s[i] );
/*
	for(int i=0;i<n;i++)
		if(s[i]+s[i++]<=4)
			same++;
	
		individuals=n-same;
	
			taxis=same+individuals;

	printf("%d",taxis);
*/			

	return 0;
}