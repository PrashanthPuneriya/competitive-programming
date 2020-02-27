#include<iostream>
#include<math.h>
using namespace std;

// Function to check prime
int isPrime(int n)
{   
    int i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
    }
return 1;
}

// MAIN function

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,i;
        cin>>x>>y;
        int sum=x+y;

        int check;

        for(i=1;i<500;i++)
        {
            sum+=i;
            if(check=isPrime(sum))
                break;

            sum=x+y;
        }
    
    cout<<i<<endl;

    }

    return 0;
}

