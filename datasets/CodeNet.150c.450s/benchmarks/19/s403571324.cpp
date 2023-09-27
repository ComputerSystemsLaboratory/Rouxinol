#include<iostream>
using namespace std;
int main(){
    int a , b , i;
    for(a = b = 1;a != 0 || b != 0;0){
        cin >> a >> b;
        if(a > b){
            i = a;
            a = b;
            b = i;
        }
        if(a == 0 && b == 0){
            break;

        }
        cout << a << " " << b <<endl;

    }
    return 0;

}
