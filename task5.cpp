#include <iostream>
using namespace std;
main()
{
    int size;
    int num;
    int smallest;
    cout<<" Enter size of an array ";
    cin>>size;
    int numbers[size];
    for(int i=0;i<size;i++)
    {
        cout<<" Enter Number ";
        cin>>numbers[i];
    }
    smallest=numbers[0];
    for(int i=1;i<size;i++)
    {
        if(smallest>numbers[i])
        {
            smallest=numbers[i];
        }
    }
    cout<<" Smallest number in that array "<<smallest;
}