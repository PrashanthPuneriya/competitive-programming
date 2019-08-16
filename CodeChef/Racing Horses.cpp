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
        int s[n];
        //Takes array inputs
        for(int i=0;i<n;i++)
            cin>>s[i];
        //Sorts the array in ascending order
        sort(s, s+n);

        int min=s[1]-s[0];

        for(int i=0;i<n-1;i++)
            if(s[i+1]-s[i] < min)
                min = s[i+1]-s[i];
        
        cout<<min<<endl;

    }
    
    return 0;
}