#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    int mod=1000000007;
    int a,b,c;
    int ans[2]={0,0};
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;++i) {
        int l=0,r=0;
        vector<int> a(10);
        for(auto&e:a) {
            scanf("%d",&e);
        }
        int f=1;
        for (int j=0;j<10;++j) {
            if (j==0) l=a[0];
            else if (a[j]<l && a[j]<r) {
                f=0;
                printf("NO\n");
                break;
            } else if (a[j]>l && a[j]<r) {
                l=a[j];
            } else if (a[j]<l && a[j]>r) {
                r=a[j];
            } else if ((a[j]-l)>(a[j]-r)) {
                r=a[j];
            } else {
                l=a[j];
            }
        }
        if (f) printf("YES\n");
    }
    return 0;
}