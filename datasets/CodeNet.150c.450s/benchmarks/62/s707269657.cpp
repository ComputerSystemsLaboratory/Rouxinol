#include <iostream>

using namespace std;

void swap(int& x, int& y){
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}

int main(){
    int a,b,c,tmp;
    cin >> a >> b >> c;
    if(b<a){
        swap(a,b);
    }
    if (c<b){
        swap(b,c);
        if(b<a){
            swap(a,b);
        }
    }
    cout << a << " " << b << " " << c << endl; 
    return 0;
}
