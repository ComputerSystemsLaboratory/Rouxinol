#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(void){
    ll m,ans;
    int n,i;
    while(1){
        cin >> n >> m;
        if(n==0) return 0;
        vector< pair<int,int> > PD(n);
        for(i=0;i<n;i++){
            cin >> PD[i].second >> PD[i].first;
        }
        sort(PD.begin(), PD.end());
        ans=0;
        i=n-1;
        while(1){
            if(i<0) break;
            if(m>=PD[i].second){
                m-=PD[i].second;
                i--;
            }else{
                ans+=(PD[i].second-m)*PD[i].first;
                i--;
                break;
            }
        }
        while(i>=0){
            ans+=PD[i].second*PD[i].first;
            i--;
        }
        cout << ans << endl;
    }
}
