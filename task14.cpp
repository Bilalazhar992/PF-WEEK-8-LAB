#include <iostream>
using namespace std;
main()
{
    int size;
    int num;
    cout<<" Enter size of an array ";
    cin>>size;
    int numbers[size];
    for(int i=0;i<size;i++)
    {
        cout<<" Enter Number ";
        cin>>numbers[i];
    }
    cout<<" Enter number which is to be multiply with each entry of array ";
    cin>>num;
    cout<<" Numbers in reverse order ";
    for(int i=--size;i>=0;i--)
    {
        numbers[i]=numbers[i]*num;
        cout<<numbers[i]<<" ";
    }
}
