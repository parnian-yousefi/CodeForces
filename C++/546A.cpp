#include <iostream>
using namespace std;
 
int main(){
    int k, n, w, i, cost = 0;
    cin>>k>>n>>w;
 
    for( i = 1 ; i <= w ; i++){
        cost += k*i;
    }
 
    if(n > cost)
        cout<<0;
    
    else
        cout<<cost-n;
 
    return 0;
}