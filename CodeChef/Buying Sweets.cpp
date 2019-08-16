#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cost;
        cin>>n>>cost;
        int a[n],sum=0;

        int sweets=0,drop=101,rem,even_buy;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(a[i]<drop)
                drop=a[i];
                //Least denomination note is drop
        }

        //Can buy these many no.of sweets
        sweets=sum/cost;
        

        rem=sum-drop;
        even_buy=rem/cost;
        

        if(even_buy>=sweets)
            cout<<"-1"<<endl;
        
        else
        {
            cout<<sweets<<endl;
        }   
        
    }

    return 0;
}