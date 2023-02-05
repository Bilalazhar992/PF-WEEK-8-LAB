#include <iostream>
using namespace std;
main()
{
    int size;
    int sum=0;
    cout<<" Enter number of resistances  ";
    cin>>size;
    float numbers[size];
    for(int i=0;i<size;i++)
    {
        cout<<" Enter Resistance Value ";
        cin>>numbers[i];
        sum=sum+numbers[i];
    }
    cout<<" Sum of all resistances "<<sum;
}