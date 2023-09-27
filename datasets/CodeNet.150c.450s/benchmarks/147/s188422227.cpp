#include <bits/stdc++.h>
#define ll long long
#define _ ios::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
using namespace std;

int main() { _
    int n; cin >> n;
    map <int, int> mp;
    for(int i = 1; i * i <= n; i++){
        for(int j = 1; j * j <= n; j++){
            for(int k = 1; k * k <= n; k++){
                mp[i * i + j * j + k * k + i * j + j * k + i * k]++;
            }
        }
    }
    for(int i = 1; i <= n; i++){
        cout << mp[i] << endl;
    }
}