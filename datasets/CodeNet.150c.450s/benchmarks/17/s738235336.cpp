#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>

using namespace std;

int comp(int *a,int *b){
    int buffer;
    if(*a > *b){
        buffer = *b;
        *b = *a;
        *a = buffer;
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int a,b,c,d,e;
    int i = 1;
    cin >> a >> b >> c >> d >> e;
    while(i){
        i = 0;
        i += comp(&a,&b);
        i += comp(&b,&c);
        i += comp(&c,&d);
        i += comp(&d,&e);
    }
    cout << e << " " << d << " " << c << " " << b << " " << a << endl;
    return 0;
}