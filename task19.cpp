#include <iostream>
using namespace std;
main()
{
    string keyword;
    cout<<" Enter default intial word ";
    getline(cin,keyword);
    string statement;
    cout<<" Enter string ";
    getline(cin,statement);
    int length1=keyword.length();
    int length2=statement.length();
    char resultant[length1+length2];
    for(int i=0;i<=length1;i++)
    {
        resultant[i]=keyword[i];
    } 
    for(int i=0;i<=length2;i++)
    {
        resultant[length1]=statement[i];
        length1++;
    }  
    cout<<" Resultent String "<<endl;
    cout<<resultant;
}