#include <bits/stdc++.h>

#define FOR(i, l, r) for(long long int i = l; i < r; i++)
#define rep(i, N) FOR(i, 0, N)

using namespace std;

typedef pair<int,int> P;
typedef vector<int> vi;
typedef vector<vi> vvi;

int main() {
   int n; cin >> n;

    //素因数分解
    map<int,int> ret;
    int ntmp = n;
    for(int i = 2; i * i <= ntmp; i++) {
        while(ntmp % i == 0) {
            ret[i]++;
            ntmp /= i;
        }
    }
    if(ntmp != 1) ret[ntmp] = 1;

    printf("%d:", n);
    map<int, int>::iterator itr = ret.begin();
    while(itr != ret.end()){
        rep(i,itr->second){
            printf(" %d", itr->first);
        }
        itr++;
    }
    printf("\n", n);
    return 0;
}

