#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,r;
    while(scanf("%d %d",&n,&r),n!=0) {
        vector<int> v;
        for(int i=n;i>=1;i--) v.push_back(i);
        for(int i=0;i<r;i++) {
            vector<int> nv;
            int p,c;
            scanf("%d %d",&p,&c);p--;
            for(int i=0;i<c;i++) {
                nv.push_back(v[p+i]);
            }
            for(int i=0;i<p;i++) nv.push_back(v[i]);
            for(int i=p+c;i<n;i++) nv.push_back(v[i]);
            v=nv;
        }
        printf("%d\n",v[0]);
    }
}