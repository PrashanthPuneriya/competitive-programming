#include<stdio.h>
int main()
{	
	int t,j;
	int l[101],c[101];

	scanf("%d",&t);
	
	for(int i=1;i<=t;i++)
		scanf("%d%d",&l[i],&c[i]);

for (int k = 0; k < t; k++)
{

	for(int i=1;i<=l[i];i++)
	{ 
		if(i%2==0) 
		printf(". ");
		else
     	printf("* ");
	
	while(j<=c[j])
	{
		j=1;
		if(i%2==0)
		{ 
		printf("* ");
		j++;
		if(j=c[j])
		printf("\n");

		break;
		}

		else
		{
		printf(". ");
		j++;

		if(j=c[j])
		printf("\n");
		break;
		}
	}
	}	
printf("\n");
}
	return 0;
}

