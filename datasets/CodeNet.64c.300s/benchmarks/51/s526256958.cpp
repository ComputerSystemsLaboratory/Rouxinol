#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

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
    int n;
    long ans=1;
    scanf("%d",&n);
    for(int i=n;i>1;i--) {
        ans*=i;
    }
    printf("%ld\n",ans);
    return 0;
}