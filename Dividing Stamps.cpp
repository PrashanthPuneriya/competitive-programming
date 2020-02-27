#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int mem[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>mem[i];
        sum+=mem[i];
    }

    if((n*(n+1))/2==sum)
        cout<<"YES";
    
    else cout<<"NO";
}