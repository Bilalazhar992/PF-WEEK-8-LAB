#include <iostream>
using namespace std;
int average;
int sum;
main()
{
    int size;
    int sum=0;
    cout<<" Enter size of an array ";
    cin>>size;
    int numbers[size];
    for(int i=0;i<size;i++)
    {
        cout<<" Enter Number ";
        cin>>numbers[i];
    }
     for(int i=0;i<size;i++)
    {
        sum=sum+numbers[i];
    }  
    average=sum/size;
    cout<<" Sum= "<<sum<<endl;
    cout<<" Average= "<<average;
}  