#include<bits/stdc++.h>
using namespace std;

void swap(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a > b){
        swap(&a, &b);
    }
    if(a > c){
        swap(&a, &c);
    }
    if(b > c){
        swap(&b, &c);
    }
    cout << a << " " << b << " " << c << endl;
    return 0;
}

