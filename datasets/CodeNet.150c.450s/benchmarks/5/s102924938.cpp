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
    vector<int>ar(n);
    for(auto&e:ar){
        scanf("%d",&e);
    }
    for(int i=n-1;i>0;i--){
        printf("%d ",ar[i]);
    }
    printf("%d\n",ar[0]);
    return 0;
}