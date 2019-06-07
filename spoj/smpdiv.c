#include<stdio.h>
int main()
{	
	int t,n[100],x[100],y[100];

	scanf("%d",&t);
	for(int i=0;i<t;i++)
		scanf("%d%d%d",&n[i],&x[i],&y[i]);

	for(int i=0;i<t;i++){
		for(int j=1;j<n[i];j++){
			if(j%x[i]==0 && j%y[i]!=0)
				printf("%d ",j);
		}
	printf("\n");
	
	}

	return 0;
}