#include <iostream>
using namespace std;
int count;
main()
{
    string word;
    count=0;
    cout<<" Enter any string ";
    cin>>word;
    int i=0;
    while(word[i]!='\0')
    {
        if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u')
        {
            count++;
        }
        i++;
    }
    cout<<" Total number of vowels in that string: "<<count;
}