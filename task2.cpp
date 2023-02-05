#include <iostream>
using namespace std;
main()
{
    int size;
    cout<<" Enter size of an array ";
    cin>>size;
    int numbers[size];
    for(int i=0;i<size;i++)
    {
        cout<<" Enter Number ";
        cin>>numbers[i];
    }
    cout<<" Numbers in reverse order ";
    for(int i=--size;i>=0;i--)
    {
        cout<<numbers[i]<<" ";
    }
}