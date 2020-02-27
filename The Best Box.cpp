#include<iostream>
#include<math.h>
using namespace std;
float fun(int p,int s)
{
    float h1,h2,res1,res2;
    //eqn is 6h^2 + Ph - S = 0

    h1 = (float) p/12 + sqrt (p*p - 24*s) / 12;
    h2 = (float) p/12 - sqrt (p*p - 24*s) / 12;
    res1=h1 * (h1 *h1 - (h1*p/4) + s/2);
    res2=h2 * (h2 *h2 - (h2*p/4) + s/2);
    
    if(res1>res2)
        return res1;
    else
    {
        return res2;
    }
    
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int p,s;
        cin>>p>>s;
        float res;
   
        res=fun(p,s);
        printf ("%.2f\n",res);
    }
    return 0;
    
}