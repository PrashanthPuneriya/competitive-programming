#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int m[t],n[t];
	for(int i=0;i<t;i++)
	scanf("%d%d",&m[i],&n[i]);

for (int k = 0; k < t; k++)
{
	for(int i=m[k];i<=n[k];i++) //first loop to print prime no.s from 2 to input number
		{
			for(int j=2;j<=i;j++)//second loop for checking remainder of i%j where j checks it from 2 to i
			{

				if(i==j)
					printf("%d\n",i);
				if(i%j==0)		
					break;

			}
		}
	printf("\n");	
}
return 0;
}