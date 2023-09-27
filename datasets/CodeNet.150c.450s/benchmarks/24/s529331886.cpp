#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
typedef pair<int, int> pii;
#define int long long

signed main(){

    while(1){
        int N, M;
        cin>> N>> M;
        if(!(N||M)) break;

        int D[N], P[N];
        for(int i=0; i<N; i++) cin>> D[i]>> P[i];

        vector<pii> v;
        for(int i=0; i<N; i++) v.push_back(pii(P[i], D[i]));
        sort(v.rbegin(), v.rend());
        int m=0, ans=0;
        for(int i=0; i<N; i++){
            int ikd=m+v[i].second;
            if(ikd>M){
                ans+=(v[i].second-(ikd-M))*v[i].first;
                break;
            }else{
                ans+=v[i].second*v[i].first;
                if(ikd==M){
                    break;
                }else{
                    m=ikd;
                }
            }
        }
        int s=0;
        for(int i=0; i<N; i++){
            s+=D[i]*P[i];
        }
        cout<< s-ans<< endl;
    }

    return 0;
}