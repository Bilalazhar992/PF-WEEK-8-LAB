#include <iostream>
using namespace std;
main()
{
    int size;
    bool isFlag=false;
    int num;
    cout<<" Enter size of an array ";
    cin>>size;
    int numbers[size];
    for(int i=0;i<size;i++)
    {
        cout<<" Enter Number ";
        cin>>numbers[i];
    }
    cout<<" Enter number for checking in an array ";
    cin>>num;
    for(int i=0;i<size;i++)
    {
        if(num==numbers[i])
        {
            isFlag=true;
        }
    }
    if(isFlag==false)
    {
        cout<<" Not Already Present ";
    }
    if(isFlag==true)
    {
        cout<<" Already Present ";
    }
}