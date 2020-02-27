#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int lim1,lim2,lim3;

    lim1 = n1;
    lim2 = n1+n2;
    lim3 = n1+n2+n3;
    int i,l[150000];

    //Having all 3 lists in a single list
    for (i = 0; i<lim1; i++)
        cin>>l[i];
    for (i = lim1; i<lim2; i++)
        cin>>l[i];
    for (i = lim2; i<lim3; i++)
        cin>>l[i];

    //Sorting arranges the same nos in one place
    sort(l,l+lim3);

    int num,index=0,occurance;
    int final[70000];

    for (i = 0; i<lim3;) {
        num=l[i];
        //Initially num has occured only once
        occurance=1;
        i++;

        while (l[i]==num)
        {
            occurance++;
            i++;
        }
        
        if(occurance>=2)
        {
            //store that value in a new array
            final[index]=num;
            index++;
        }

    }
        cout<<index<<endl;
        for(int i=0;i<index;i++)
            cout<<final[i]<<endl;
        

        
        
    return 0;
}