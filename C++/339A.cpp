#include <iostream>
using namespace std;
 
int main(){
    string s, result = "";
    cin>>s;
    int i, l, one, two, three;
    one = two = three = 0;
    l = s.length();
    for(i = 0 ; i < l ; i++){
        if(s[i] == '1'){
            one++;
        }
        else if(s[i] == '2'){
            two++;
        }
        else if(s[i] == '3'){
            three++;
        }
    }
 
    for(i = 0 ; i < l/2 + 1 ; i++){
        if(one != 0){
            result += '1';
            one--;
        }
        else if(two != 0){
            result += '2';
            two--;
        }
        else if(three != 0){
            result += '3';
            three--;
        }
        if( i != l/2){
            result += '+';
        }
    }
 
    cout<<result;
 
    return 0;
}