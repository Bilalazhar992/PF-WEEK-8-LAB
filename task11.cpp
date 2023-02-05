#include <iostream>
using namespace std;
main()
{
    string alphabets;
    alphabets="abcdefghijklmnopqrstuvwxyz";
    string enter;
    cout<<" Enter any string ";
    cin>>enter;
    int i=0;
    while(enter[i]!='\0')
    {
        for(int n=0;alphabets[n]!='\0';n++)
        {
            if(enter[i]==alphabets[n])
            {
              cout<<alphabets[n+1];
            }
        }     
        i++;
    }
}