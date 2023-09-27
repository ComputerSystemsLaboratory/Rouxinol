#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

/**
 * vector<int>ar(3);
 * for(auto&e:ar){
 *     scanf("%d",&e);
 * }
 * sort(ar.begin(),ar.end())
 * int sum=accumulate(ar.begin(),ar.end(),0);
 ***/

int main(){
    double pai=3.141592653589;
    int n,x,ans;
    for(;;){
        scanf("%d %d",&n,&x);
        ans=0;
        if(n==0) break;
        for(int i=1;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(n>=x-i-j && j<x-i-j){
                    ans++;
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}