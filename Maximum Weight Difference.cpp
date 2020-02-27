#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{
int t;
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    int w[n];
    int child=0,parent=0,tot_wt=0;

    for(int i=0;i<n;i++)
        {
            cin>>w[i];
            tot_wt+=w[i];
        }
    sort(w,w+n);

    //Father should carry the other group where there are more no.of items
    if(k>n-k)
        k=n-k;

    for(int i=0;i<k;i++)
        child+=w[i];

    parent=tot_wt-child;

    int result;
    result=parent-child;

    cout<<result<<endl;



}
return 0;
}