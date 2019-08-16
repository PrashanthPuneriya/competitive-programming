#include<bits/stdc++.h>
//#include<algorithm>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1]={0};
        //Length of each song
        for(int i=1;i<=n;i++)
            cin>>a[i];


        //Position initially
        int k;
        int ans=0;
        cin>>k;
        int result=a[k];

        sort(a,a+(n+1));
        for(int i=1;i<=n;i++)
            if(result==a[i])
                ans=i;


        cout<<ans<<endl;

    }
    
    return 0;
}