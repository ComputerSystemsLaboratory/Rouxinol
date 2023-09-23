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
    int n,memo=1000000001,r[200000],ans=-1000000001;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&r[i]);
    }
    for(int i=0;i<n-1;i++){
        if(memo<r[i]){
            continue;
        }else{
            memo=r[i];
        }
        for(int j=i+1;j<n;j++){
            if(r[j]-r[i]>ans){
                ans=r[j]-r[i];
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}