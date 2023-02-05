#include <iostream>
using namespace std;
main()
{
   string name;
   cout<<" Enter name ";
   getline(cin,name);
   int i=0;
   while(name[i]!='\0')
   {
        i++;
   }
   cout<<" That string has "<<i<<" characters"; 
   if(i%2==0)
   {
    cout<<" Even number of chracters ";
   }
   if(i%2!=0)
   {
    cout<<" Odd number of chracters ";
   }
}