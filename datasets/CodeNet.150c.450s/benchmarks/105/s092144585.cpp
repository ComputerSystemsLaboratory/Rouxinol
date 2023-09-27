#include <bits/stdc++.h>

using namespace std;

struct basedEXORSET {
    unsigned long long base[64];
    basedEXORSET(){
        memset(base,0,sizeof(base));
    }
    unsigned long long cul(unsigned long long x){
        unsigned long long one = 1;
        for(int i = 0;i < 64;i++){
            if(x & (one << i)){
                x ^= base[i];
            }
        }
        return x;
    }
    void add(unsigned long long x){
        x = cul(x);
        if(x){
            base[__builtin_ctzll(x)] = x;
        }
    }
    bool has(unsigned long long x){
        return cul(x) == 0;
    }
};

int n;

void solve(){
    int i,j;
    string str;
    cin >> n;
    vector<unsigned long long> a(n);
    for(i = 0;i < n;i++) cin >> a[i];
    cin >> str;
    basedEXORSET bes;
    for(i = n-1;i >= 0;i--){
        if(str[i] == '0'){
            bes.add(a[i]);
        }
        else{
            if(bes.cul(a[i])){
                cout << 1 << endl;
                return;
            }
        }
    }
    cout << 0 << endl;
}

int main(){
    int t;
    cin >> t;
    for(int i = 0;i < t;i++){
        solve();
    }
}
