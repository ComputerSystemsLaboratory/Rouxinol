#include <iostream>

using namespace std;

int main(){
    
    int h[10], i;
    
    for(i = 0; i < 10; i++){
        
        cin >> h[i];
        
        if(h[i] < 0 || h[i] > 10000)
            i--;
    }
    
    int a = 0, b = 0, c = 0, temp;
    
    for(i = 0; i < 10; i++){
        
        if(h[i] > c){
            c = h[i];
            if(c > b){
                temp = b;
                b = c;
                c = temp;
                if(b > a){
                    temp = a;
                    a = b;
                    b = temp;
                }
            }
        }
    }
    
    cout << a << "\n" << b << "\n" << c << "\n";
    
    return 0;
}