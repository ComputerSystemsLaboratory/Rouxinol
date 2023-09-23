#include <iostream>
#include <cstdio>
using namespace std;

int main(void){
    int a,b;
    cin >> a >> b; 
    if(a < b){
        cout << "a < b";
        cout << endl;
    }else if(a > b){
        cout << "a > b";
        cout << endl;
    }else{
        cout << "a == b";
        cout << endl;
    }

}

