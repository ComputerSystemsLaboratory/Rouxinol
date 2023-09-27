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
int gcd(int a,int b){
    int tmp;
    if(a<b){
        tmp=a;
        a=b;
        b=tmp;
    }
    for(;;){
        if(a%b==0) break;
        tmp=a%b;
        a=b;
        b=tmp;
    }
    return b;
}




int main(){
    double pai=3.141592653589;
    long x,y,ans;
    scanf("%ld %ld",&x,&y);
    printf("%ld\n",gcd(x,y));
    return 0;
}