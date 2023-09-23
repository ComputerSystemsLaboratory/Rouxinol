#include <bits/stdc++.h>

#define rep(i,n) for(int i = 0; i < n; i++)
#define rrep(i,n) for(int i = n - 1; i >= 0; i--)
#define REP(i,k,n) for(int i = k; i < n; i++)

#define vi vector<int>
#define pb push_back
#define mp make_pair
using namespace std;
typedef pair<int, int> P;
typedef long long ll;

const int pmax = 1000010;
bool p[pmax];


int main(){
    rep(i,pmax) p[i] = true;
    p[0] = p[1] = false;
    for(int i = 2; i * i < pmax; i++) {
        if(p[i]) {
            for(int j = i * 2; j < pmax; j += i) {
                p[j] = false;
            }
        }
    }

    int a,d,n;
    while(cin >> a >> d >> n,a != 0 && d != 0 && n != 0) {
        int cnt = 0;
        for(int i = a; i < pmax; i += d) {
            if(p[i]) {
                cnt++;
                if(cnt == n) {
                    cout << i << endl;
                    break;
                }
            }
        }
    }
    return 0;
}

