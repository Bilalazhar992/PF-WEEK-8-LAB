#include <iostream>
using namespace std;
int p;
main()
{
    string word;
    p=0;
    getline(cin,word);
    for(int i=0;word[i]!=0;i++)
    {
        p++;
    }
    for(int i=0;word[i]!=0;i++)
    {
        p++;
    }
    for(int i=p;i>=0;i--)
    {
       cout<<word[i]; 
    }

}