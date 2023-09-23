#include <iostream>
using namespace std;

int func1(int a,int b){
    while(a != b){
        if(a>b)a-=b;
        else b-=a;
    }
    return a;
}

int func2(const int a,const int b){
    int a2=a,b2=b;
    while(a2 != b2){
        if(a2>b2)b2+=b;
        else a2+=a;
    }
    return a2;
}

int main(){
    int a,b;
    while(cin >> a >> b){
        cout << func1(a,b) << " " << func2(a,b) << endl;
    }
    return 0;
}