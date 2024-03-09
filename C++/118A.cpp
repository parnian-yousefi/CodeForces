#include <iostream>
#include <ctype.h>
using namespace std;
 
int main(){
   string s;
   cin>>s;
   for( int i = 0 ; i < s.size() ; i++ ){
      s[i] = tolower( s[i] );
      if( s[i] != 'a' && s[i] != 'y' && s[i] != 'o' &&
          s[i] != 'e' && s[i] != 'u' && s[i] != 'i' )
         cout<<"."<<s[i];
   }
}