#include <iostream>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    
    int dChN = 0, i, j;
    
    bool found = false;
 
    for(i = 0 ; i < s.length() ; i++){
        found = false;
        for( j = 0 ; j < i ; j++){
            if(s[i] == s[j]){
                found = true;
                break;
            }
        }
        if(!found){
            dChN++;
        }
    }
 
    if(dChN%2 != 0){
        cout<<"IGNORE HIM!";
    }
 
    else{
        cout<<"CHAT WITH HER!";
    }
 
    return 0;
}