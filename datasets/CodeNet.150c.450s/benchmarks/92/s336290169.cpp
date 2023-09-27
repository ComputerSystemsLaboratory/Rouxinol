#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int a,b;
    while(true){
        int sum,digit;
        a=-1;
        digit = 0;
        
        cin >> a >> b;
        
        if(a == -1){
            break;
        }
        
        sum = a + b;
        
        while(true){
            if(sum != 0){
                sum /= 10;
                digit++;
            }
            else{
                break;
            }
        }
        
        cout << digit << endl;
    }
    return 0;
}