#include<stdio.h>
int main()
{	
	int t;
	int count,last;

	scanf("%d",&t);
	int n[t];

	for(int i=0;i<t;i++)
		scanf("%d",&n[i]);


	for(int i=0;i<t;i++){
	count=0;
	while(n[i]!=0){
	last=n[i]%10;
	n[i]/=10;
	if(last==4) count++;
	}
	printf("%d\n",count);
}
	return 0;
}