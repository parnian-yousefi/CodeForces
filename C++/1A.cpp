#include <iostream>
using namespace std;
 
int main()
{
   unsigned long long int m, n, a;
   cin>>m>>n>>a;
   if( m % a != 0 )
      m = m/a + 1;
   else
      m = m/a;
   if( n % a != 0 )
      n = n/a + 1;
   else
      n = n/a;
   cout<<(unsigned long long int)(n*m);

   return 0;
}
