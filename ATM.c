#include<stdio.h>
int main()
{
	/* x= amount of cash which Pooja wishes to withdraw*/
	/* y= Pooja's initial account balance with 2 digit precison*/

	int x;
	float y,z;

	scanf("%d%f",&x,&y);

	if(x%5==0 && x>0 && x<=2000 && y>=0 && y<=2000)
	{
		z=y-(float)x-0.50;

		if(x<y-0.50)
		printf("%.2f",z);

		else
			printf("%.2f",y);
	}

	else
		printf("%.2f",y);

	return 0;

}