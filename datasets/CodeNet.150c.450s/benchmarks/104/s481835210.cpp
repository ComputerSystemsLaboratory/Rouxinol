#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

//typedef int kz;
//typedef long kz;
typedef long long kz;

kz gcd(kz a,kz b) { if(b==0) return a; else gcd(b,a%b); }
kz lcm(kz a,kz b) { return a*b/gcd(a,b); }

/**
 * vector<int>ar(3);
 * for(auto&e:ar){
 *     scanf("%d",&e);
 * }
 * sort(ar.begin(),ar.end())
 * int sum=accumulate(ar.begin(),ar.end(),0);
 **/


int main(){
    int mod=1000000007;
    int n,w;
    scanf("%d",&w);
    scanf("%d",&n);
    int x[w];
    int r[n][2];
    int ans[w];

    for (int i=0;i<n;i++) {
        scanf("%d,%d",&r[i][0],&r[i][1]);
    }
    for (int i=1;i<=w;i++) {
        int tmp=i;
        for (int j=0;j<n;j++) {
            if (tmp==r[j][0]) tmp=r[j][1];
            else if (tmp==r[j][1]) tmp=r[j][0];
        }
        ans[tmp-1]=i;
    }
    for (int i=0;i<w;i++) {
        printf("%d\n",ans[i]);
    }
    return 0;
}