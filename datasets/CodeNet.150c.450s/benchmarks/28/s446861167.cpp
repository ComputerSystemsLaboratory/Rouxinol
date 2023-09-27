#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) for(int i = 0; i < (b); i++)
#define all(a) (a).begin(), (a).end()
#define show(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
const int INF = 2000000000;
using namespace std;

const int MAX_N = 100000;
const int MAX_W = 10000;

bool C(long long lim, int n, int k, long long w[MAX_N]){
    int i = 0;
    rep(j,k){
        long long s = 0;
        while(s + w[i] <= lim){
            s += w[i];
            i++;
            if(i == n) return true;
        }
    }
    return false;
}


int main(){
    int n, k;
    long long w[MAX_N];
    cin >> n >> k;
    rep(i,n) cin >> w[i];

    long long right = MAX_W * MAX_N, left = 0;
    while(right - left > 1){
        long long mid = (right + left) / 2;
        if(C(mid, n, k, w)) right = mid;
        else left = mid;
    }
    cout << left + 1 << endl;
}