#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

int sol(int x){
    int a=1,b=1;
    for(int i=0;i<x;i++){
        int tmp=a;
        a=a+b;
        b=tmp;
    }
    return b;
}

int main(){
    int n;
    long long s;
    scanf("%d",&n);
    s=sol(n);
    printf("%d\n",s);
    return 0;
}