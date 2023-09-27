#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

vector<P> factorize(ll N){
    vector<P> res;
    ll tmp = N;
    for(ll i=2; i*i<=tmp; i++) {
        if(tmp%i == 0) {
            ll cnt = 0;
            while(tmp%i == 0) {
                cnt++;
                tmp /= i;
            }
            res.emplace_back(P(i, cnt));
        }
    }
    if(tmp > 1) {
        res.emplace_back(P(tmp, 1));
    }
    return res;
}

int main(){
    int N;
    cin >> N;
    vector<P> facts = factorize(N);
    stringstream ss;
    ss << N << ":";
    sort(facts.begin(), facts.end());
    for(auto &fact: facts){
        for(int i=0; i<fact.second; i++){
            ss << " " << fact.first;
        }
    }
    cout << ss.str() << endl;
}
