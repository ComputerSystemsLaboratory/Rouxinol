#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(long long N, std::vector<std::string> S){
    map<string, ll> mp;
    for(ll i = 0; i < N; ++i) mp[S[i]]++;
    cout << "AC x " << mp["AC"] << endl;
    cout << "WA x " << mp["WA"] << endl;
    cout << "TLE x " << mp["TLE"] << endl;
    cout << "RE x " << mp["RE"] << endl;
    return;
}

int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<std::string> S(N);
    for(int i = 0 ; i < N ; i++){
        std::cin >> S[i];
    }
    solve(N, std::move(S));
    return 0;
}
