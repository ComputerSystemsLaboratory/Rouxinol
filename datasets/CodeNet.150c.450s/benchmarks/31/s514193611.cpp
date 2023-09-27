#include <bits/stdc++.h>
using namespace std;
const long long INFL=1LL << 60;
const long long INF=1<<30;

int main() {
    int n;
    cin >> n;
    vector<int> R(n);
    for(int i=0;i<n;i++){
        cin >> R.at(i);
    }    
    int minr=R.at(0);
    int maxv=-INF;
    for(int i=1;i<n;i++){
        maxv=max(maxv,R.at(i)-minr);
        minr=min(R.at(i),minr);
    }
    cout << maxv<<endl;
    return 0;
}
