#include<iostream>
using namespace std;
int main(){
    int x, y, k;
    cin >> x >> y;
    
    while(y != 0){
        k = x % y;
        x = y;
        y = k;
    }
    
    cout << x << endl;
    
    return 0;
}
