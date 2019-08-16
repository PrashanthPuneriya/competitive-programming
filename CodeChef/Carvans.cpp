#include<bits/stdc++.h>
//#include<algorithm>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,count=1;
        cin>>n;
        int car[n],min=0;
        for(int i=0;i<n;i++)
        {
            cin>>car[i];   
        }
        min=car[0];
        for(int i=1;i<n;i++)
        {
            if(car[i]>car[i-1])
                car[i]=car[i-1];
            
            else count++;
        }
        cout<<count<<endl;
    }
    
    return 0;
}