#include<stdio.h>
main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n,i,count=0;
		char a;
		scanf("%lld",&n);
		while(n--){
			scanf(" %c",&a);
			if(a=='1')
				count++;
		}	
		printf("%lld\n",count*(count+1)/2);
	}
	return 0;
}