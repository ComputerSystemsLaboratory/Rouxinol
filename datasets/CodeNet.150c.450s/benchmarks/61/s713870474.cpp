#include<bits/stdc++.h>
using namespace std;

int main(){

    while(1){
        int n, a, b, c, x; cin >> n >> a >> b >> c >> x;
        if(n == 0) break;
        vector<int> y(n);
        for(int i = 0; i < n; i++){
            cin >> y[i];
        }

        int idx = 0;
        for(int i = 0; i <= 10000; i++){

            if(x == y[idx]) idx++;
            if(idx == n){
                cout << i << endl;
                break;
            }
            x = (a * x + b) % c;
            
        }

        if(idx != n) cout << -1 << endl;

    }

    return 0;
}
