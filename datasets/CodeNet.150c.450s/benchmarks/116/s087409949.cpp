#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n,k;
    long long int a;
    const long long int INF=1LL<<60;
    while (cin>>n>>k) {
        if (n==0&&k==0) {
            break;
        } else {
            std::deque<long long int> deq;
            for (int i=0;i<n;i++) {
                cin>>a;
                deq.emplace_back(a);
            }
            std::deque<long long int> s(n+1,0);
            long long int ans=-INF;
            for (int i=0;i<n;i++) {
                s[i+1]=s[i]+deq[i];
            }
            for (int i=0;i<=n-k;i++) {
                ans=max(ans,s[k+i]-s[i]);
            }
            cout<<ans<<endl;
        }
    }
}
