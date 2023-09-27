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
    int n,ans=0,chk,tmp;
    scanf("%d",&n);
    vector<int> ar(n);
    for(auto&e:ar){
        scanf("%d",&e);
    }
    for(;;){
        chk=0;
        for(int i=1;i<n;i++){
            if(ar[i-1]>ar[i]){
                tmp=ar[i];
                ar[i]=ar[i-1];
                ar[i-1]=tmp;
                ans++;
                chk=1;
            }
        }
        if(chk==0) break;
    }
    for(int i=0;i<n-1;i++){
        printf("%d ",ar[i]);
    }
    printf("%d\n",ar[n-1]);
    printf("%d\n",ans);
    return 0;
}