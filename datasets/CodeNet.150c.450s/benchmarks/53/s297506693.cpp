#include <bits/stdc++.h>
#include <string>
#include <vector>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;



int main() {
    int n;
    cin >> n;
    int dummy = n;
    bool flag = false;
    if(n%2==0) flag = true;
    for(int i=3;i*i<=n;i+=2){
        if(flag) break;
        if(n%i==0)flag=true;
    }
    vector<int> l;

    if(flag){
        for(int i=2;i*i<=n;i++){
            if(n%i==0) {
                l.push_back(i);
                n /= i;
                i=1;
            }
        }
        if(n > 1) l.push_back(n);
    }
    if(!flag) l.push_back(n);

    cout<<dummy<<":";
    rep(i,l.size())cout<<" "<<l[i];
    cout << endl;
}
