#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int d;
    cin >> d;
    vector<ll> decrease(26);
    for(int i = 0; i < 26; i++) cin >> decrease[i];
    vector<vector<ll>> increase(d, vector<ll>(26));
    for(int i = 0; i < d; i++){
        for(int j = 0; j < 26; j++){
            cin >> increase[i][j];
        }
    }
    vector<ll> contest(d);
    for(int i = 0; i < d; i++) cin >> contest[i];
    vector<ll> lastdate(26);
    ll score = 0;
    for(int i = 0; i < d; i++){
        ll realdate = i + 1;
        lastdate[contest[i] - 1] = realdate;
        score += increase[i][contest[i] - 1];
        for(int j = 0; j < 26; j++){
            score -= (realdate - lastdate[j]) * decrease[j];
        }
        cout << score << "\n";
    }
    //cout << "hello";
}