#include <iostream>
using namespace std;

int a0 = 0, a1 = 0, a2 = 0, a = 0;

int main(){
    for(int i = 0; i < 10; i++){
        cin >> a;
        if(a0 <= a){
            a2 = a1;
            a1 = a0;
            a0 = a;
        }else if(a1 <= a){
            a2 = a1;
            a1 = a;
        }else if(a2 <= a){
            a2 = a;
        }
    }
    cout << a0 << endl << a1 << endl << a2 << endl;
    return 0;
}