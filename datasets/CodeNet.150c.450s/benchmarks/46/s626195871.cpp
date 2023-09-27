#include <bits/stdc++.h>
using namespace std;

int kp(int n, int x){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            if(x - i - j > j && x - i - j <= n) cnt++;
        }
    }
    return cnt;
}
int main(){
    while(true){
        int n, x; cin >> n >> x;
        if(n == 0 && x == 0) break;
        cout << kp(n, x) << endl;
    }
}
