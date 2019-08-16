#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int dishes;
        double total_loss=0.00;

        cin>>dishes;
        cout.precision(9);
        while(dishes)
        {
            int price,quantity,discount;
            
            double inc_price,dis_price,lost;

            cin>>price>>quantity>>discount;

            inc_price=price+((price*discount)/100.00);
            //cout<<"incresesd price"<<inc_price<<endl;
            dis_price=inc_price-((inc_price*discount)/100.00);
            //cout<<"decreased price"<<dis_price<<endl;
            lost=price-dis_price;
            //cout<<"one loss"<<lost<<endl;
            total_loss+=lost*quantity;
            
           
            dishes--;
        }
        
        cout<<fixed<<total_loss<<endl;

        t--;
    }





}