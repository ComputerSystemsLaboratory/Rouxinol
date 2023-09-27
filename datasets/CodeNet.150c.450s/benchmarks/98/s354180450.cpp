#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
#define rep(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
int main(void){
    int n,m;
    while(cin>>n>>m,n){
        vi t(n),h(m);
        rep(i,n) cin>>t[i];
        rep(i,m) cin>>h[i];
        sort(all(t));
        sort(all(h));
        int diff=accumulate(all(h),-accumulate(all(t),0));
        if(abs(diff)%2==1){
            cout<<-1<<endl;
            continue;
        }
        diff/=2;
        int found=-1;
        for(auto i:t){
            if(binary_search(all(h),i+diff)){
                found=i;
                break;
            }
        }
        if(found==-1){
            cout<<-1<<endl;
        }else{
            cout<<found<<" "<<found+diff<<endl;
        }
    }
}