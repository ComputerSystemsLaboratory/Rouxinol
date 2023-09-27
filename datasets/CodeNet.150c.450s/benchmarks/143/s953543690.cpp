#include <bits/stdc++.h>
#include <string>

using namespace std;

int gcd(int x, int y) { return (x % y)? gcd(y, x % y): y; }
#define rep(i,n) for(int i = 0;i<n;i++)

int main(){

    int N;cin >> N;
    long long s;
    vector<long long> a(110000, 0);
    long long sum = 0;
    rep(i,N){
        cin >> s;
        a[s]++;
        sum+=s;
    }
    int Q;cin >> Q;
    long long b,c;
    vector<long long> r(Q);
    rep(i,Q){
        cin >> b >> c;
        sum += a[b]*c-a[b]*b;
        a[c] += a[b];
        a[b] = 0;
        r[i] = sum;
    }
    rep(i,Q)cout << r[i] << endl;
    
    

}

