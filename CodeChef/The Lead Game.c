#include<stdio.h>
int main()
{	
	int N,i;
	int c_1=0,c_2=0;
	int s_1[10000]={0},s_2[10000]={0};
	int lead_1=0,lead_2=0;
	int max_1=0,max_2=0;

	scanf("%d",&N);

	for(i=0;i<N;i++)
	{
		scanf("%d%d",&s_1[i],&s_2[i]);

		c_1+=s_1[i];
		c_2+=s_2[i];


		if(c_1>=c_2)
		lead_1 = c_1 - c_2;

		else
		lead_2 = c_2 - c_1;

		if(lead_1>max_1)
			max_1 = lead_1;

		if(lead_2>max_2)
			max_2 = lead_2;
	}


	if(max_1>max_2)
		printf("1 %d",max_1);
	else
		printf("2 %d",max_2);

  return 0;
}