#include <iostream>
using namespace std;
 
int main(){
   int n,x = 0;
   string s;
   char ch;
   cin>>n;
   while( n ){
      cin>>s;
      if( s[0] == 'X' || s[0] == 'x' )
         ch = s[1];
      else
         ch = s[0];
         
      if( ch == '+' )
         x++;
      else
        x--;
      n--;
   }
   cout<<x;

   return 0;
}