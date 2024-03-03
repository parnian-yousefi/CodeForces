#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
   int i,n = 25,t;
   while( n ){
      cin>>i;
      if( i == 1 )
         t = n;
         
      n--;
   }
   n = t % 5;
   t /= 5;
   t++;
   if( n == 0 ){
      n = 5;
      t--;
   }
   i = abs( 3 - t ) + abs( 3 - n );
   cout<<i;

   return 0;
}