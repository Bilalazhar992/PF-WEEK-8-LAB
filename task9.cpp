#include <iostream>
using namespace std;
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
    int length;
    length=word.length();
    if(word[--length]==doo)
    {
        return true;
    }
    if(word[--length]!=doo)
    {
        return false;
    }
}