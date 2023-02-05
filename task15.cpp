#include <iostream>
using namespace std;
main()
{
    int size;
    int num;
    int largest;
    cout<<" Enter size of an array ";
    cin>>size;
    int numbers[size];
    for(int i=0;i<size;i++)
    {
        cout<<" Enter Number ";
        cin>>numbers[i];
    }
    largest=numbers[0];
    for(int i=1;i<size;i++)
    {
        if(largest<numbers[i])
        {
            largest=numbers[i];
        }
    }
    cout<<" largest number in that array "<<largest;
}