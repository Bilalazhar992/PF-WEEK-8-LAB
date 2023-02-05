#include <iostream>
using namespace std;
main()
{
    int size;
    int p;
    p=0;
    int num;
    cout<<" Enter Size of an array ";
    cin>>size;
    int array[size];
    cout<<" Filling of an array ";
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    cout<<" Enter Number for which we have to search in array ";
    cin>>num;
    for(int i=0;i<size;i++)
    {
        if(num==array[i])
        {
            p++;
        }
    }
    if(p==0)
    {
        cout<<" Not Found ";
    }
    else
    {
        cout<<" Number founded ";
    }
}