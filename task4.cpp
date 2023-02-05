#include <iostream>
using namespace std;
main()
{
    int size;
    cout<<" Enter size of an array ";
    cin>>size;
    int numbers[size];
    int i;
    for(i=0;i<size;i++)
    {

        cout<<" Enter Number ";
        cin>>numbers[i];
    }
    cout<<"The first element of that array is: "<<numbers[0]<<endl;
    cout<<"The last element of that array is: "<<numbers[--size]<<endl;    
}