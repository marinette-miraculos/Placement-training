#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the number of rows: ";
    cin>>r;
    cout<<"Enter the number of cols: ";
    cin>>c;
    int slot[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"Enter element"<< i <<j<<": ";
            cin>>slot[i][j];
            if(slot[i][j] !=0 && slot[i][j] !=1)
            {
                cout<<"Invalid input, type only 0 or 1";
                j--;
            }
        }    
    }
    int count=0, max=0, index;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(slot[i][j]==1)
            {
                count++;
            }
        }
        if(max<count)
        {
            max=count;
            index=i;
        }
        count=0;
    }
    cout<<"Row with maximum count: "<<index+1;
    return 0;
}
