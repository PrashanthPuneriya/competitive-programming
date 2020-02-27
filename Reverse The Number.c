#include <stdio.h>


int main()
{
  int t,i,num,remain;

  scanf("%d",&t);

  for(i=0;i<t;i++){

   int opp=0;

   scanf("%d",&num);

    while(num !=0){

        remain = num%10;

        opp=remain+ opp*10;

        num = num/10;

    }

   printf("%d\n",opp);

  }

  return 0;
}
