#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;
int main(){
    int n,m;
    while(1){
        cin >> n >> m;
        if(n ==0 && m==0) break;
        vector<pair<int, int> > vec(n+1);
        rep(i,n){
            int d,p;
            cin >> d >> p;
            vec[i] = make_pair(p,d);
        }
        sort(vec.begin(),vec.end(),greater<pair<int,int> >());
        int i=0;
        while(m > 0){         
            vec[i].second--;
            m--;
            if(vec[i].second == 0) i++;
            if(vec.size() == i) break;
        }
        int ans = 0;
        rep(i,vec.size()){
            ans += vec[i].first * vec[i].second;
        }
        cout << ans << endl;
    }
    return 0;
}

