#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
using namespace std;

int main(){
    int x, y, s;
    while(cin >> x >> y >> s, x && y && s){
        int MAX = -1;
        rep(i, 1, s){
            rep(j, 1, s){
                int a = i * (100 + x) / 100;
                int b = j * (100 + x) / 100;
                if(a + b != s) continue;
                int na = i * (100 + y) / 100;
                int nb = j * (100 + y) / 100;
                MAX = max(MAX, na + nb);
            }
        }
        cout << MAX << endl;
    }
}