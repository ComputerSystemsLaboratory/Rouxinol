#include <iostream>
using namespace std;

int main(){
    int cnt, n;
    
    while(cin >> n){
        cnt = 0;
        
        for(int i = 0;i <= 9;i++){
            for(int j = 0;j <= 9;j++){
                for(int k = 0;k <= 9;k++){
                    for(int l = 0;l <= 9;l++){
                        if(i + j + k + l > n){
                            break;
                        }
                        if(i + j + k + l == n){
                            cnt++;
                        }
                    }
                }
            }
        }
        
        cout << cnt << endl;
    }
    
    return 0;
}