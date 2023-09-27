#include <bits/stdc++.h>

using namespace std;
using ll = long long;
vector<pair<int,int>> jiko;
vector<int> imo;
bool solve(){
    int n;
    cin>>n;
    if(n==0)return false;

    jiko.clear();

    for(int i = 0;i < n;++i) {
        int h,m,s;
        scanf("%d:%d:%d",&h,&m,&s);
        int l=h*3600+m*60+s;

        scanf("%d:%d:%d",&h,&m,&s);
        int r=h*3600+m*60+s;

        jiko.emplace_back(l,r);
    }

    sort(jiko.begin(),jiko.end());

    imo.assign(3600*24+1,0);
    for(int i = 0;i < n;++i) {
        imo[jiko[i].first]++;
        imo[jiko[i].second]--;
    }
    int ans=imo[0];
    for(int i = 0;i < 3600*24;++i) {
        imo[i+1]+=imo[i];
        ans=max(ans,imo[i+1]);
    }

    cout<<ans<<endl;


    return true;
}

int main() {
    while(solve());
    return 0;
}

