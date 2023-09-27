#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> P;

#define p_ary(ary,a,b) do { cout << "["; for (int count = (a);count < (b);++count) cout << ary[count] << ((b)-1 == count ? "" : ", "); cout << "]\n"; } while(0)
#define p_map(map,it) do {cout << "{";for (auto (it) = map.begin();;++(it)) {if ((it) == map.end()) {cout << "}\n";break;}else cout << "" << (it)->first << "=>" << (it)->second << ", ";}}while(0)

template<typename T1,typename T2>ostream& operator<<(ostream& os,const pair<T1,T2>& a) {os << "(" << a.first << ", " << a.second << ")";return os;}

const char newl = '\n';

mt19937 r(std::chrono::high_resolution_clock::now().time_since_epoch().count());

vector<ll> hakidashi(vector<ll> a) {
    int n = a.size(),m = 60;
    int i = 0;
    // p_ary(a,0,n);
    for (int j = 0;j < m;++j)  {
        if (((a[i]>>j)&1)^1) for (int k = j+1;k < m;++k) if (((a[i]>>k)&1)) {
            for (int l = 0;l < n;++l) if ((a[l]>>k)&1) a[l] ^= (1LL<<j);
            break;
        }
        // cout << i << " " << j << newl;
        // p_ary(a,0,n);
        if ((a[i]>>j)&1) {
            for (int k = 0;k < 60;++k) if (j-k && ((a[i]>>k)&1)) {
                for (int l = 0;l < n;++l) if ((a[l]>>j)&1) a[l] ^= (1LL<<k);
                // cout << "a" << k << newl;
            }
        } else j--;
        // cout << i << " " << j << newl;
        // p_ary(a,0,n);
        i++;
        if (i == n) break;
        /*
        if (((a[i]>>j)&1)^1) for (int k = i;k < n;++k) if ((a[k]>>j)&1) {
            swap(a[i],a[k]);
            break;
        }
        if ((a[i]>>j)&1) {
            for (int s = 0;s < n;++s) if (i != s && ((a[s]>>j)&1)) a[s] ^= a[i];
            i++;
            if (i == n) break;
        }*/
    }
    return a;
}

/*
void hakidashi(vector<vector<int>>& a) {
    int n = a.size();
    for (int i = 0;i < n;++i) {
        if (a[i][i] == 0) {
            int p = i,q = i;
            for (int j = i;j < n;++j) {
                for (int k = i;k < n;++k) if (a[j][k]) {
                    p = j;
                    q = k;
                    break;
                }
                if (a[p][q]) break;
            }
            swap(a[i],a[p]);
            for (int j = 0;j < n;++j) swap(a[j][i],a[j][q]);
        }
        for (int j = 0;j < n;++j) if (j != i && a[i][j]) for (int k = 0;k < n;++k) a[k][j] ^= a[k][i];
        for (int j = 0;j < n;++j) if (j != i && a[j][i]) for (int k = 0;k < n;++k) a[j][k] ^= a[i][k];
    }
}*/

int main() {
    /*
    int n = 3;
    string s = "100";
    vector<int> a(n);
    for (int i = 0;i < n;++i) a[i] = r()%15+1;
    vector<vector<bool>> b(n+1,vector<bool>(16,false));
    b[n][0] = true;
    for (int i = n-1;i >= 0;--i) {
        for (int j = 0;j < 16;++j) if (b[i+1][j]) {
            if (s[i] == '0') b[i][j] = b[i][j^a[i]] = true;
            else if (b[i+1][j^a[i]]) b[i][j] = true;
        }
    }
    p_ary(a,0,n);
    cout << (a[1]^a[2]) << endl;
    for (int i = 0;i < n+1;++i) p_ary(b[i],0,16);
    */
    
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        string s;
        for (int i = 0;i < n;++i) cin >> a[i];
        cin >> s;
        vector<ll> b;
        if (s[n-1] == '1') {
            cout << 1 << newl;
            continue;
        }
        bool ans = true;
        for (int i = n-1;i >= 0;--i) {
            b.push_back(a[i]);
            if (s[i] == '1') {
                vector<ll> c = hakidashi(b);
                b.pop_back();
                int m = c.size();
                for (int j = 0;j < 60;++j) {
                    bool f = false;
                    for (int k = 0;k < m-1;++k) if (((c[k]>>j)&1)) f = true;
                    if (((c[m-1]>>j)&1) && !f) {
                        ans = false;
                        break;
                    }
                }
                // p_ary(c,0,m);
            }
        }
        cout << (ans ? 0 : 1) << newl;
    }
}