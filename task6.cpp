#include <iostream>
using namespace std;
main()
{
   string name;
   cout<<" Enter name ";
   cin>>name;
   int i=0;
   while(name[i]!='\0')
   {
    cout<<" character at index "<<i<<"   "<<name[i]<<endl;
    i++;
   }
}