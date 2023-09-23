#include<iostream>
using namespace std;


int gcd(int x, int y){
    if(y>0){
        int r;
        r = x % y;
        return gcd(y, r);
    }else{
        return x;
    }
}

int main(){
    int x,y;

    cin >> x >> y; 

    if(x<y){
        int c;
        c = y;
        y = x;
        x = c;
    }
    cout << gcd(x, y)<< endl;
}