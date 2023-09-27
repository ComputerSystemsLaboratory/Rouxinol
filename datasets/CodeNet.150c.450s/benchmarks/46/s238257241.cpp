#include<iostream>
using namespace std;
int main(){
    int n, x;
    int S = 0;
    
    while(1){
        cin >> n >> x;
        
        if((n == 0) && (x == 0))break;
        
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                for(int k = 1; k <= n; k++){
                    if(((i + j + k) == x) && (i != j) && (j != k) && (k != i)){
                        S += 1;
                    }
                }
            }
        }
        
        S = S / 6;
        
        cout << S << endl;
        
        S = 0;
    }
    
    
    
}

