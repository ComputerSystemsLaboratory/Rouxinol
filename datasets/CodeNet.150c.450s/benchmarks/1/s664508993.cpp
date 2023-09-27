#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,s,n) for(int i=s;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
typedef long long ll;
const int inf = 1e9;
int main(){
    int n; cin >> n;
    vector<int> l(n, inf);
    int len = 0;
    rep(i,n){
        int a; cin >> a;
        //cout << " " << a;
        if(l[len] < a){
            len++;
            l[len] = a;
            //cout << "x";
        }
        else {
            vector<int>::iterator it = lower_bound(all(l), a);
            int tmp = it - l.begin();
            l[tmp] = min(l[tmp], a);
        }
        //cout << "len = " << len << "  " << l[len]<< endl;
    }
    //cout << endl;
    //cout << len << endl;
    //rep(i,len)cout << " " << l[i];
    //cout << endl;
    cout << len + 1 << endl;
    return 0;
}
