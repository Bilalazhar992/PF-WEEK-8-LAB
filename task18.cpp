#include <iostream>
using namespace std;
main()
{
    float price;
    float rates[4]={0.25,0.10,0.05,0.01};
    int sum=0;
    cout<<" Enter price of an item ";
    cin>>price;
    char names[4][10]={"quater","dime","nickel","penny"};
    float money[4];
    for(int i=0;i<4;i++)
    {
        cout<<names[i]<<" ";
        cin>>money[i];
        sum=sum+money[i]*rates[i];
    }
    if(sum>=price)
    {
        cout<<" You can by that product ";
    }
    if(sum<price)
    {
        cout<<" You cannot by that product ";
    }
}