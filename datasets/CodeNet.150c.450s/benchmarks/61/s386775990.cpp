#include <bits/stdc++.h>

using namespace std;

int main(){

    cin.tie(0);
    ios::sync_with_stdio(false);

    while( true ){

        int n, a, b, c, x;
        
        cin >> n >> a >> b >> c >> x;

        if(n == 0 && a == 0 && b == 0 && c == 0 && x == 0)
            break;

        vector<int> y(n);
        for( auto &x : y )
            cin >> x;

        int index = 0;

        for(int i = 0;i < 10001; i++) {

            if( y[index] == x )
                index++;

            if(index == n){
                cout << i << endl;
                break;
            }

            x = (a * x + b) % c;

        }

        if(index != n)
            cout << -1 << endl;

    }

    return 0;

}
