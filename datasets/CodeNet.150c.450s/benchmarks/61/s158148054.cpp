#include <bits/stdc++.h>

using namespace std;

int main(){
    while(true){
        int n; cin >> n;
        if(n == 0) break;
        int a,b,c,x; cin >> a >> b >> c >> x;
        vector<int> y(n);
        for(int i = 0; i < n; i++)cin >> y[i];
        int frame = 0, i = 0;
        if(x == y[i]){
            i++;
        }
        for(; frame < 10001 && i < n;){
            frame++;
            x = (a*x + b)%c;
            if(x == y[i])i++;
        }
        if(frame > 10000)cout << -1 << endl;
        else cout << frame << endl;
    }
    return 0;
}


