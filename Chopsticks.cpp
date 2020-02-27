#include<iostream>
#include<algorithm>
using namespace std;
#define BOB 1
#define ALICE 0
int main()
{
    int n,d;
    cin>>n>>d;
    int l[n];
    for(int i=0;i<n;i++)
        cin>>l[i];
    
    sort(l,l+n);
    int count=0;

    for(int i=0;i<n-1;i++)
        if(l[i+1]-l[i]<=d)
            {
                count++;
                i++;
            }

    cout<<count<<endl;
}