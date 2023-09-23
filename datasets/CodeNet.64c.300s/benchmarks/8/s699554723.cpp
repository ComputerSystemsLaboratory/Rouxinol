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
    int n;
    scanf("%d",&n);
    for(int i=3;i<=n;i++){
        int x=i;
        if(i%3==0){
            printf(" %d",i);
        }else{
            do{
                if(x%10==3){
                    printf(" %d",i);
                    break;
                }
                x/=10;
            }
            while(x);
        }
    }
    printf("\n");
    return 0;
}