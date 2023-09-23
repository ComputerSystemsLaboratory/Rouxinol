#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a, b, c, d;
    d=0;
    cin >> a >> b >> c;
    for(int i =a; i<=b; i++){
        if(c%i ==0){
            
            d = d +1;
        }
    
        
    }
    cout << d <<endl;
     return 0;
}