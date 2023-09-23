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
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("a > b\n");
    }else if(a<b){
        printf("a < b\n");
    }else{
        printf("a == b\n");
    }
    return 0;
}