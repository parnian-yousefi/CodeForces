#include <iostream>
using namespace std;
 
int main(){
   int n, i, s1, s2;
   bool b;
   string s;
   cin>>n;
   while( n ){
      cin>>s;
      b = false;
      i = s1 = s2 = 0;
      while( s[i]-'0' > 9 ){
         s1 *= 26;
         s1 += (s[i]-'A')+1;
         i++;
      }
      while( s[i]-'0' <= 9 && i < s.size() ){
         s2 *= 10;
         s2 += s[i]-'0';
         i++;
      }
      if( i < s.size() ){
         b = true;
         s1 = s2;
         i++;
         s2 = 0;
         while( i < s.size() ){
            s2 *= 10;
            s2 += (s[i]-'0');
            i++;
         }
      }
      if( b == false )
         cout<<"R"<<s2<<"C"<<s1<<endl;
      
      else{
         int a[6];
         i = 0;
         a[i] = 0;
         while( s2 >= 26 ){
            a[i] += s2%26;
            if( a[i] <= 0 ){
               a[i] += 26;
               a[i+1] = -1;
            }
            else
               a[i+1] = 0;
            s2 /= 26;
            a[i]--;
            i++;
         }
         a[i] += s2;
         a[i]--;
         if( a[i] < 0 )
            i--;
         for( int j = i; j >= 0 ; j-- )
            cout<<char(a[j]+'A');
         cout<<s1<<endl;
      }
      n--;
   }

   return 0;
}