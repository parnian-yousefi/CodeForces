#include <iostream>
#include <string.h>
using namespace std;
 
int main(){
    
    int sum1 = 0, sum2 = 0, l;
    string s1, s2;
    cin>>s1>>s2;
    bool flag = false;
    
    l = s1.length();
    
    for(int i = 0 ; i < l ; i++ ){
        if( tolower(s1[i]) < tolower(s2[i]) ){
            cout<<-1;
            flag = true;
            break;
        }
        if( tolower(s1[i]) > tolower(s2[i]) ){
            cout<<1;
            flag = true;
            break;
        }
    }
    
    if(!flag){
        cout<<0;
    }
    
    return 0;
}