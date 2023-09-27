#include "bits/stdc++.h"

using namespace std;

typedef pair<int, int> P;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

    int n,m;//????????°,??????
    while(cin>>n>>m,n||m){
        vector<P> v;
        for(int i=0;i<n;i++){
            int d,p;cin>>d>>p;//?????¢,?????????
            v.push_back(P(p,d));
        }
        int res=0;
        sort(v.rbegin(),v.rend());
        for(int i=0;i<n;i++){
            int pot=v[i].first,dis=v[i].second;
            if(dis<=m){
                m-=dis;
                continue;
            }
            else{
                dis-=m;
                m=0;
                res+=pot*dis;
            }
        }
        cout<<res<<endl;
    }
}