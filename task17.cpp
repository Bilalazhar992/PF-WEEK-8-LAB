#include <iostream>
using namespace std;
main()
{
    int arr1[2];
    cout<<" Filling of first array "<<endl;
    for(int i=0;i<2;i++)
    {
        cin>>arr1[i];
    }
    int size;
    cout<<" Enter size of second array ";
    cin>>size;
    int arr2[size];
    cout<<" Filling of second array "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr2[i];
    }
    int resultant[2+size];
    int i;
    int n;
    for(i=0;i<1;i++)
    {
        resultant[i]=arr1[i];
        for(n=0;n<size;n++)
        {
            resultant[n+1]=arr2[n];
        }
    }
        resultant[n+1]=arr1[i];
        cout<<" Final Shape "<<endl;
    for(i=0;i<(2+size);i++)  
    {
        cout<<resultant[i]<<" ";
    } 
}