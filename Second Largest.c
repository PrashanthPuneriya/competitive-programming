#include<stdio.h>
int main()
{
	int i,t,a,b,c;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		if((a<=c&&b>=c)||(c>=b&&c<=a))
			printf("%d\n",c);
		else if((a>=b&&b>=c)||(c>=b&&b>=a))
			printf("%d\n",b);
		else if((a>=b&&a<=c)||(c<=a&&b>=a))
			printf("%d\n",a);
	}
	return 0;
}	