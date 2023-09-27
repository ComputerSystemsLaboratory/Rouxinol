#include<iostream>
using namespace std;

int main(){

    int n, i=1, x;
    cin >> n;

    while(1){

        x = i;

        if(x % 3 == 0){
            cout << " " << i;
        }

        while(1){
            if(x % 3 == 0 && x == i){
                break;
            }
            do{   
                if((x % 10 == 3) || (x == 3 && i % 3 != 0)){
                    cout << " " << i;
                    break;
                }
                x /= 10;
            }while(x);
            break;
        }

        if( ++i > n){
            break;
        }        
    }

    cout << "\n";

    return 0;

} 
