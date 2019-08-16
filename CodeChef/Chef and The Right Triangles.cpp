#include<iostream>
#include<math.h>
using namespace std;

int max(int a,int b)
{
    int val;
    val=(a>b)?a:b;
    return val;
}
int dist_square(int a1,int b1,int a2,int b2)
{
    return((a2-a1)*(a2-a1) + (b2-b1)*(b2-b1));
}

int main()
{
    int n;
    cin>>n;
    int count=0;
    while (n--)
    {
        int x1,y1,x2,y2,x3,y3,a,b,c;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;

        a=dist_square(x1,y1,x2,y2);
        b=dist_square(x1,y1,x3,y3);
        c=dist_square(x3,y3,x2,y2);
        
        int maxi;
        maxi=max(a, max(b, c));
        int p,q;
        if(a==maxi)
        {
            p=b;
            q=c;
        }
        else if(b==maxi)
        {
            p=a;
            q=c;
        }
        else{
            p=a;
            q=b;
        }

        if(maxi==p+q)
            count++;

    }
    cout<<count<<endl;
    return 0;
}

