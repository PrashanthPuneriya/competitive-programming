#include <iostream>
using namespace std;
int main(void) {
	int t;
	cin>>t;
	while(t--)
	{
		int req,left,left_money,books,i;
        cin>>req>>left>>left_money>>books;
        int p[books],c[books];
        req=req-left;

        int flag=0;
        for(i=0;i<books;++i)
        {
            cin>>p[i]>>c[i];
            if(c[i]<=left_money && req<=p[i])
                {
                    flag=1;
                }
        }

        if(flag==1)
            cout<<"LuckyChef"<<endl;
        else
        {
            cout<<"UnluckyChef"<<endl;
        }
        
		
	}
	return 0;
}