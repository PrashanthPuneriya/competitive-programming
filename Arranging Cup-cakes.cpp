#include<stdio.h>

#include<math.h>

int makesquare(int area)
{
   float s=sqrt(area);
   int side=int(s);
   if(side*side==area)
   return 0;
   int i,j;
   for(i=side;i>=1;i--)
   {
    if(area%i==0)
    {
     j=area/i;
     if(j-i>=0)
     return j-i;
     else
     return i-j;               
                    }                   
                       
                       
                       } 
    
    
    
    }
    int main()
    {
        int n,i,num;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {   
         scanf("%d",&num);
     printf("\n %d",makesquare(num));

}
     return 0 ;   
        
        
        }
