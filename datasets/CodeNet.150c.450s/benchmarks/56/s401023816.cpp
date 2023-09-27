#include<iostream>
#include<cmath>
#include<string>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
        int n;
        long long ans=0;
        scanf("%d",&n);
        vector<long>ar(n);
        for(auto&e:ar){
                scanf("%ld",&e);
        }
        sort(ar.begin(),ar.end());
        for(int i=0;i<n;i++){
                ans+=ar[i];
        }
        printf("%ld %ld %lld\n",ar[0],ar[n-1],ans);
        return 0;
}