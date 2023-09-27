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
    int a;
    long long s=0;
    scanf("%d",&a);
    vector<long>ar(a);
    for(auto&e:ar){
        scanf("%ld",&e);
    }
    sort(ar.begin(),ar.end());
    //s=accumulate(ar.begin(),ar.end(),0);
    for(int i=0;i<a;i++){
        s+=ar[i];
    }
    printf("%ld %ld %lld\n",ar[0],ar[a-1],s);
    return 0;
}