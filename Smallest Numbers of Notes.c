#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--)
	{
        	int n,count=0;
        	scanf("%d",&n);

        	if(n>=100){
            		count = count+n/100;
            		n=n%100;
        	}
        	if(n>=50){
            		count = count+n/50;
            		n=n%50;
        	}
        	if(n>=10){
            		count = count+n/10;
            		n=n%10;
        	}
        	if(n>=5){
            		count = count+n/5;
            		n=n%5;
        	}
        	if(n>=2){
            		count = count+n/2;
            		n=n%2;
        	}
        	
        count = count + n;
        printf("%d\n",count);
	}
	return 0;
}