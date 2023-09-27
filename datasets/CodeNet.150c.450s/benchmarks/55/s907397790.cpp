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
    char w;
    int ans;
    for(;;){
        ans=0;
        for(;;){
            scanf("%c",&w);
            if(w=='\n'){
                printf("%d\n",ans);
                break;
            }else{
                ans+=(static_cast<int>(w)-48);
            }
            if(ans==0){
                return 0;
            }
        }
    }
    return 0;
}