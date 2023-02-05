#include <iostream>
using namespace std;
main()
{
    string statement;
    cout<<" Enter a String ";
    getline(cin,statement);
    int i=0;
    while(statement[i]!='\0')
    {
        if(statement[i]=='I' ||statement[i]=='i' || statement[i]=='A' || statement[i]=='a' || statement[i]=='E' || statement[i]=='e' || statement[i]=='u' || statement[i]=='U' || statement[i]=='O' || statement[i]=='o')
        {
            statement[i]='#';
        }
        i++;
    }
    for(int i=0;statement[i]!='\0';i++)
    {
        if(statement[i]=='#')
        {
            continue;
        }
        else
        {
        cout<<statement[i];
        }
    }
}