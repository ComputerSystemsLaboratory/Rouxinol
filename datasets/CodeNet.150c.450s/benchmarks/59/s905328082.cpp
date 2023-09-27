#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
using namespace std;
#define REP(i,n) for (int i=0;i<(n);++i)
#define rep(i,a,b) for(int i=a;i<(b);++i)

int N;

int main() {
    cin.tie(0); ios_base::sync_with_stdio(false);

    cin >> N;
    vector<int> a(N);
    REP(i,N) cin >> a[i];
    rep(i,1,N+1){
        REP(i,N) cout << a[i] << (i!=N-1 ? ' ' : '\n');
        int key = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > key){
            a[j+1] = a[j];
            --j;
        }
        a[j+1] = key;
    }
    return 0;
}
