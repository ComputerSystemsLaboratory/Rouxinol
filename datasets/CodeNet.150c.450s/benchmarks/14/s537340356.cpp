#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;


int main(){
    int n;
    cin >> n;
    if(n < 3 || n > 10000) return -1;
    for(int i = 1 ;i <= n ; i ++){
        int x = i;
        if(x % 3 == 0){
            cout << " " << i ;
            continue;
        }else if(x % 10 == 3){
            cout << " " << i ;
            continue;
        }else{
            while(x > 0){
                x = round(x/10);
                if(x % 10 == 3){
                    cout << " " << i ;
                    break;
                }
            }
            continue;
        }
    }
    cout << endl;

    return 0;
}
