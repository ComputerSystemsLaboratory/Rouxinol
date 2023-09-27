/**
*    author:  Dooloper
*    created: 06.06.2020 09:17:55
**/

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <utility>
#include <algorithm>
#include <queue>
#include <deque>
#include <stack>
#include <cmath>
#include <functional>
#include <cassert>


using namespace std;
typedef unsigned long long ull;
typedef long long ll;

vector<pair<ll,int>> primeFactor(ll N){
    vector<pair<ll, int>> ret;
    ll target = N;

    for (ll i = 2; i * i< target; i++){
        int facotrNum = 0;
        while(N % i == 0){
            facotrNum++;
            N /= i;
        }
        if(facotrNum)
            ret.emplace_back(make_pair(i, facotrNum));
    }
    if(N > 1)
        ret.emplace_back(make_pair(N, 1));
    return ret;
}

int main() {
    cin.tie(0);
    int N;
    cin >> N;
    vector<pair<ll, int>> prime = primeFactor(N);
    cout << N << ":";
    for (pair<ll, int> P : prime)
    {
        for (int i = 0; i < P.second; i++){
            cout << " " << P.first;
        }
    }
    cout << endl;
    return 0;
}
