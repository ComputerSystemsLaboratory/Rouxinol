#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int d;cin>>d;
    vector<int> c(27);
    for(int i=1;i<=26;i++){
        cin>>c[i];
    }
    vector<vector<int>> s(d+1,vector<int>(27));
    for(int i=1;i<=d;i++){
        for(int j=1;j<=26;j++){
            cin>>s[i][j];
        }
    }
    vector<int> t(d+1);
    for(int i=1;i<=d;i++){
        cin>>t[i];
    }
    vector<int> last(27);
    int manzoku=0;
    for(int i=1;i<=d;i++){
        manzoku+=s[i][t[i]];
        last[t[i]]=i;
        int sum=0;
        for(int j=1;j<=26;j++){
            sum+=c[j]*(i-last[j]);
        }
        manzoku-=sum;
        cout<<manzoku<<endl;
    }
    for(int i=1;i<=d;i++){
        //cout<<t[i]<<endl;
    }

    return 0;
}
