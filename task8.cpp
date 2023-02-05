#include <iostream>
using namespace std;
int p;
bool decider(string,char);
main()
{
    bool result;
    string word;
    char doo;
    getline(cin,word);
    cin>>doo;
    result=decider(word,doo);
    if(result==1)
    {
        cout<<"True";
    }
    if(result==0)
    {
        cout<<"false";
    }
}
bool decider(string word,char doo)
{
     p=0;
    for(int i=0;word[i]!='\0';i++)
    {
        if(word[i]==doo)
        {
            p++;
            return true;
        }
    }
    if(p==0)
    {
        return false;
    }
}
