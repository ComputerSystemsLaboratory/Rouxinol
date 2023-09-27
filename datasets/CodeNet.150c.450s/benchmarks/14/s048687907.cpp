#include <iostream>
#include <math.h>
#include <stdio.h>
#define PI 3.1415926535897932384626433832795028841971
using namespace std;

int main(){
    int n,a;
    cin >> n;
    a = 1;
    while(true){
        if(a > n){
            break;
        }
        if(a % 3 == 0){
            cout << " " << a;
        }
        else{
            int tmp = a;
            while(true){
                if(tmp % 10 == 3){
                    cout << " " << a;
                    break;
                }
                
                tmp /= 10;
                
                if(tmp == 0){
                    break;
                }
            }
        }
        a++;
    }
    cout << endl;
    return 0;
}
               