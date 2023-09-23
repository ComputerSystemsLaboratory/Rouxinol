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
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && b<c){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}