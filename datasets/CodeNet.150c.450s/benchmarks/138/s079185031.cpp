
#include <iostream>

using namespace std;

void gcd(int x,int y){
    if(x % y != 0){
        gcd(y, x % y);
    }else{
        cout << y << endl;
    }
}

int main(){
    int x,y;
    cin >> x >> y;
    if(x >= y){
        gcd(x, y);
    }else{
        gcd(y, x);
    }
}

