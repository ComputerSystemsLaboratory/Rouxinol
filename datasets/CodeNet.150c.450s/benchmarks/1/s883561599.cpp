#include <bits/stdc++.h>
using namespace std;
const int INF = 1000000001;
const int MAX_N = 100000;
const int MAX_S = 317;
int n, s, j, skip, nextskip, lis, idx, nextidx;
int a[MAX_N], sz[MAX_S * 2], top[MAX_S * 2], p[MAX_S], nextp[MAX_S];
// vector<int> a, sz, top, p, nextp;

int PatienceSorting(int nexti){
    int r = -1;
    int l = -1;
    if(p[0] == -1) r = 0;
    for(int i = 0; i < 2 * s; i++){
        top[i] = INF;
        sz[i] = 0;
    }
    for(int i = 0; i < n; i++){
        // filtering out irrelevant elements
        if(i < skip) continue;
        // else if(r + 1 < p.size() && a[i] == p[r + 1]){
        else if(r + 1 < idx && a[i] == p[r + 1]){
            r++;
            continue;
        }else if(r == -1 || a[i] < p[r] || (l >= j && a[i] > top[j])) continue;
        // push a[i] to the appropriate pile
        int h;
        if(l == -1 || a[i] > top[l]){
            l++;
            h = l;
        }else{
            h = lower_bound(top, top + MAX_S * 2, a[i]) - top;
            // h = lower_bound(top.begin(), top.end(), a[i]) - top.begin();
        }
        top[h] = a[i];
        sz[h]++;
        if(h == nexti){
            if(nextskip == -1) nextskip = i;
            nextp[nextidx++] = a[i];
            // nextp.push_back(a[i]);
        }
    }
    return l;
}

int main(){
    cin >> n;
    s = MAX_S;
    // s = sqrt(n);
    j = 2 * s - 1;
    // a.resize(n); sz.resize(2 * s); top.resize(2 * s);
    for(int i = 0; i < n; i++) cin >> a[i];
    // p.push_back(-1);
    p[0] = -1;
    idx = 1;
    while(1){
        int l = PatienceSorting(-1);
        if(l < 2 * s - 1){
            lis += l + 1;
            break;
        }
        int nexti = -1;
        for(int i = 2 * s - 1; i >= s; i--){
            if(sz[i] <= s && sz[i] > 0){
                nexti = i;
                break;
            }
        }
        // nextp.clear();
        nextskip = -1;
        nextidx = 0;
        PatienceSorting(nexti);
        // p = nextp;
        idx = nextidx;
        swap(p, nextp);
        skip = nextskip;
        lis += nexti + 1;
    }
    cout << lis << endl;
}
