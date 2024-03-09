#include <iostream>
using namespace std;
 
int main(){
   int n,i,m=0,k=0;
   string s;
   bool b = false;
   cin>>n>>s;
   for( i = 1 ; i < s.size() ; i++ )
      if( s[i-1] == s[i] )
         m++;
   cout<<m;
}