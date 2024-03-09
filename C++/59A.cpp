#include <iostream>
#include <string.h>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    
    int i, uc = 0 , lc = 0;
    
    for(i = 0 ; i < s.length() ; i++){
        if(s[i]-'a' < 0){
            uc++;
        }
        else{
            lc++;
        }
    }
 
    if(uc > lc){
        for(i = 0 ; i < s.length() ; i++){
            s[i] = toupper(s[i]);
        }
    }
    else{
        for(i = 0 ; i < s.length() ; i++){
            s[i] = tolower(s[i]);
        }
    }
    cout<<s;
}