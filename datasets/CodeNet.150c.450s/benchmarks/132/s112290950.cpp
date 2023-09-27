#include <iostream>
#include <vector>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(int)(b);i++)
#define rep(i,n) FOR(i,0,n)

bool owari(vector<int> v, int c) {
    rep(i,v.size()) {
        if(i == c) continue;
        if(v[i] > 0) return false;
    }
    return true;
}

void solve(int n, int p) {
    int cup = p;
    vector<int> per(n,0);
    
    int i;
    while(1) {
        for(i=0; i<n; i++) {
            if(cup == 0) {
                if(owari(per, i)) goto out;
                cup += per[i]; per[i] = 0;
            }
            else {
                ++per[i]; --cup;
            }
        }
    }
out:
    cout << i << "\n";
    return ;
}

int main() {
    int n,p;
    while(cin>>n>>p && n) solve(n,p);
    return 0;
}