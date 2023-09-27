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
    int s,t=1;
    while(true){
        scanf("%d",&s);
        if(s==0) break;
        printf("Case %d: %d\n",t,s);
        t++;
    }
    return 0;
}