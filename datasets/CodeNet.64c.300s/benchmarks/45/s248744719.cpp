#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i,k,n) for(int i=k;i<(int)(n);i++)

#define vi vector<int>
#define pb push_back
#define mp make_pair

typedef long long ll;

int main() {
//    ifstream in("a_in.txt");
//    cin.rdbuf(in.rdbuf());

    int n,m,pp;
    while(cin >>n >> m>>pp,n){
        int p = pp;
        int a[110] = {};
        p = 100-p;
//        int m[110] = {};
        rep(i,n) cin >> a[i];
        int sum = 0;
        rep(i,n) sum += a[i];
        m--;
//        cout << p << " : " << sum*100 << " : " << a[m] << endl;
        if(a[m] ==0) cout << 0 << endl;
        else cout << int(p*sum/a[m])  << endl;

    }
    return 0;
}
