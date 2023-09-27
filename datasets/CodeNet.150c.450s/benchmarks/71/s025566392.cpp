#include <iostream>
using namespace std;
int N;
 
int solve(){
    int ans = 0;
    for(int i = 0; i <= 9; ++i){
        for(int j = 0; j <= 9; ++j){
            for(int k = 0; k <= 9; ++k){
                for(int l = 0; l <= 9; ++l){
                    int tmp = i + j + k + l;
                    if(tmp == N) ans++;
                }
            }
        }
    }
    return ans;
}
 
int main(){
    while(cin >> N){
        int ans = solve();
        cout << ans << endl;
    }
}
