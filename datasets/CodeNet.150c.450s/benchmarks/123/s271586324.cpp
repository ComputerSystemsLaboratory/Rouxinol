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
bool check(int x){
    int i=2;
    while(i*i<=x){
        if(x%i==0) return false;
        i++;
    }
    return true;
}

int main(){
    double pai=3.141592653589;
    int n,k,ans=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&k);
        if(check(k)){
            ans++;
        }
    }
    printf("%d\n",ans);
    return 0;
}