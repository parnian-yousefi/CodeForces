#include <iostream>
using namespace std;
 
int main(){
    int a,b,i;
    cin>>a>>b;
 
    for(i = 1 ; true ; i++){
        a *= 3;
        b *= 2;
        if(a > b){
            cout<<i;
            break;
        }
    }
 
    return 0;
}