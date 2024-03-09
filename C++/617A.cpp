#include <iostream>
using namespace std;
 
int main(){
    int n, steps = 0, maxDis = 5;
    cin>>n;
 
    while(n != 0){
        steps += n/maxDis;
        n -= (n/maxDis)*maxDis;
        maxDis--;
    }
 
    cout<<steps;
 
    return 0;
}