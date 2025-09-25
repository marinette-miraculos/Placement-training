#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter the total hours spent: ";
    cin>>t;
    int E[t],L[t];
    for(int i=0;i<t;i++)
    {
            cout<<"Enter no of people entered at time"<< i+1<<": ";
            cin>>E[i];
            cout<<"Enter no of people left at time"<< i+1<<": ";
            cin>>L[i];
    }
    int count=0, max=0;
    for(int i=0;i<t;i++)
    {
        count+=E[i]-L[i];
        if(max<count)
        {
            max=count;
        }
    }
    cout<<"Maximum people that were present at an hour: "<<max;
    return 0;
}
