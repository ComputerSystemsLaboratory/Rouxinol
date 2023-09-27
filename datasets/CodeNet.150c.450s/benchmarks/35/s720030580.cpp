#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

int main(){
    int mod=1000000007;
    int n;
    int ans;
    for (;;) {
        scanf("%d",&n);
        if (n!=0) {
            vector<int> p(n);
            for (auto&e:p) {
                scanf("%d",&e);
            }
            ans=p[0];
            for (int i=0;i<n;i++) {
                int tmp=0;
                for (int j=i;j<n;j++) {
                    tmp+=p[j];
                    ans=max(ans,tmp);
                }
            }
        } else {
            break;
        }
        printf("%d\n",ans);
    }
    return 0;
}