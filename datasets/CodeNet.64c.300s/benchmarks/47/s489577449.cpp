#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int main(){
    int n,k[101]={0},max_k=0;
    
    while(scanf("%d",&n)!=EOF){
        k[n]++;
    }
    
    for(int i=1;i<=100;i++){
        if(max_k<k[i]) max_k=k[i];
    }
    
    for(int i=1;i<=100;i++){
        if(max_k==k[i]) printf("%d\n",i);
    }
    
    return 0;
}