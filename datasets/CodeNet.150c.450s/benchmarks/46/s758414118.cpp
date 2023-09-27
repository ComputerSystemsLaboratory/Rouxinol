#include <iostream>

using namespace std;

int combination(int n, int x){
    int count = 0;
    for(int i = 1; i <= n; i++){
        for(int j = i+1; j <= n; j++){
            for(int k = j+1; k <= n; k++){
                if(i+j+k == x){
                    count++;
                }
            }
        }
    }
    return count;
}

void solve(){
    int n, x;
    while(cin >> n >> x){
        if(n == 0 && x == 0){
            return;
        }
        cout << combination(n, x) << endl;
    }
}

int main() {
    solve();
    return 0;
}