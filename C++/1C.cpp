#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

#define PI 3.14159265
#define e 0.0001

int mfmod(int a, int b){
    return a%b;
}

int main(){
    long double x1,x2,x3,y1,y2,y3,a,b,det,m,n,r2;
    cout<<std::fixed;
    cout<<std::setprecision(8);
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    m = pow(x2 , 2)-pow(x1 , 2)+pow(y2 , 2)-pow(y1 , 2);
    n = pow(x2 , 2)-pow(x3 , 2)+pow(y2 , 2)-pow(y3 , 2);
    det = (x2-x1)*(y2-y3)-(y2-y1)*(x2-x3);
    a = ((y2-y3)*m/2 + (y1-y2)*n/2)/det;
    b = ((x3-x2)*m/2 + (x2-x1)*n/2)/det;
    r2 = pow(a-x1 , 2)+pow(b-y1 , 2);
    long double deg1,deg2,deg3;
    deg1 = abs(atan2(b-y1 , a-x1) - atan2(b-y2 , a-x2)) * 180/PI + e;
    deg2 = abs(atan2(b-y2 , a-x2) - atan2(b-y3 , a-x3)) * 180/PI + e;
    deg3 = abs(atan2(b-y1 , a-x1) - atan2(b-y3 , a-x3)) * 180/PI + e;
    int temp,n1,n2,n3;
    for(int i = 3 ; i <= 100 ; i++){
        n = 360000 / i;
        if( mfmod((deg1 * 1000) , n)<100 &&
            mfmod((deg2 * 1000) , n)<100 && 
            mfmod((deg3 * 1000) , n)<100){
                temp = i;
                break;
        }
    }
    n = 0.5*temp*r2*sin(2*PI/temp);
    long long int tmp1 , tmp2;
	tmp1 = (n * 10000);
	tmp2 = n * 1000000;
    if(tmp2 - (tmp1*100) >= 75 ){
        cout<<n + e;
    }
    else{
        cout<<n;
    }

    return 0;
}
