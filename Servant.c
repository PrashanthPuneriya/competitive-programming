#include <stdio.h>

int main(void) {
	int t,n;
	scanf("%d",&t);
	while(t)
	{   
	    scanf("%d",&n);
	    if(n<10)
	    printf("What an obedient servant you are!\n");
	    else
	    printf("-1\n");
	    t--;
	}
	
	return 0;
}

