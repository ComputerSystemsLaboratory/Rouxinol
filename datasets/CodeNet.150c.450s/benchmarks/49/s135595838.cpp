#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
using namespace std;

int main(){
    int n;
    while(cin >> n, n){
        int sum = 0, MAX = 0, MIN = 1100;
        rep(i, 0, n){
            int s;
            cin >> s;
            sum += s;
            MAX = max(MAX, s);
            MIN = min(MIN, s);
        }
        cout << (sum - MAX - MIN) / (n - 2) << endl;
    }
}