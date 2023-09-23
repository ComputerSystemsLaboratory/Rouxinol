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
    int a,b,c,ans=0;
    scanf("%d %d %d",&a,&b,&c);
    for(int i=a;i<=b;i++){
        if(c%i==0) ans++;
    }
    printf("%d\n",ans);
    return 0;
}