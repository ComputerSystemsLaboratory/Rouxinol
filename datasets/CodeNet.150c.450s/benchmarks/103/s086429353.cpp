#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>

using namespace std;
typedef long long ll;

int dfs(int h,int n, int sum,int s){
    
    if(h==10){
        if(sum == s && n == 0) return 1;
        return 0;
    }
    
    return dfs(h+1,n-1,sum+h,s)+dfs(h+1,n,sum,s);
    
}

int main(){
    int n,s;
    
    while(1){
        
        scanf("%d%d",&n,&s);
        
        if(n==0) break;
        
        printf("%d\n",dfs(0,n,0,s));
    }
    
    return 0;
}