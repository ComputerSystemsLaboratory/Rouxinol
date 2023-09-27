#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    vector<bool> a(31,false);
    for(int i = 0;i < 28;++i) {
        int t;
        cin>>t;
        a[t]=true;
    }
    for(int i = 1;i <= 30;++i) {
        if(a[i])continue;
        cout<<i<<endl;
    }
    return 0;
}

