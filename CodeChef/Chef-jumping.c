#include<stdio.h>
int main()
{  long long int a;
   scanf("%lld",&a);
   if(((a%6)==1)||((a%6)==0)||((a%6==3)))
   printf("yes");
   else
   printf("no");
   return 0;
} 