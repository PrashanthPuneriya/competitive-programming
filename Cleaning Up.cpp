#include<bits/stdc++.h>
//#include<algorithm>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        int size,no_of_finished;
        cin>>size>>no_of_finished;
        
        int ind_finished,count;
        int arr[1002]={0};


		for(int i=1; i<=size; i++)
            arr[i]=true;

		for(int i=1; i<=no_of_finished; i++) 
        {
			cin>>ind_finished;
            arr[ind_finished]=false;
		}

    
        for(int i=1,count=1;i<=size;i++)
        {
            if(arr[i] && (count%2))
                cout<<i<<" ";
            
            if(arr[i])
                count++;
        }

        cout<<endl;

        for(int i=1, count=1; i<=size; i++) {
			if(arr[i]&&(count%2==0)) 
                cout<<i<<" ";
			
            if(arr[i]) 
                count++;
		}
		cout<<endl;
    

    }
    
    return 0;
}