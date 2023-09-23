#include<iostream>
using namespace std;

int main(){
    int a=0,b=0;
    for(int i=0;i<8;i++){
        int x;cin >> x;
        if(i<4)a+=x;
        else b+=x;
    }
    cout << ((a<b)?b:a) << endl;
}