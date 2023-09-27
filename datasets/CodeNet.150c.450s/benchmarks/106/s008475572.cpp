#include<iostream>
using namespace std;

int main(){
    int x, y, z;
    cin >> x >> y >> z;
    int b = 0;
    
    for (int a = x; a <= y ; a += 1){
        if (z % a == 0){
            b += 1;
        }
    }
    
    cout << b << endl;
    
    return 0;
}
