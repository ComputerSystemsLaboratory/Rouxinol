#include <iostream>
using namespace std;
int main(void){
    // Your code here!
    int n,x;  //ｎは1~ｎの範囲、ｘは組み合わせの数値
    int c = 0;
    
    while(1){
        cin >> n >> x;
        if(n == 0 && x == 0) break;
        
        for(int i = 1; i <= n; i++){
            
            for(int j = i + 1; j <= n; j++){
                
                for(int k = j + 1; k <= n; k++){
                    if((i + j + k) == x) c += 1;
                }
            }
        }
        cout << c << endl;
        c = 0;
    }
    
    
}

