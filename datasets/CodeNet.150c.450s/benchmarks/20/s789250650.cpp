#include <iostream>
using namespace std;
int main() {
    int a,b,c,d;
    
    cin >> a;
        
    c = a / 3600 ;//秒を時間に
    b = a % 60 ;
    d = a / 60 % 60;
    
    cout << c << ":" <<  d << ":" << b << endl;
    
    return 0;
       
}