#include<bits/stdc++.h>
using namespace std;

int s[10],t;

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        if(n)s[t++]=n;
        else printf("%d\n",s[--t]);
    }
    return 0;
}