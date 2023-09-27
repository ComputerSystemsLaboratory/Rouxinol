#include<iostream>
using namespace std;
int main (){
    int a, b;
    while (1){
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        if (a < b){
            cout << a << " " << b <<endl;
        }
        else if (a > b){
            cout << b << " " << a << endl;
        }
        else if (a == b){
            cout << a << " " << b << endl;
        }
    }return 0;
}
