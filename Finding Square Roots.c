#include<stdio.h>
#include <math.h>
int main()
{	
	int t,res;
	scanf("%d",&t);
	int n[t];
	for(int i=0;i<t;i++)
		scanf("%d",&n[i]);

	for(int i=0;i<t;i++){
		res=(int)sqrt(n[i]);
		printf("%d\n",res);}

	return 0;
}