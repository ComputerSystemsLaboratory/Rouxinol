#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    int mod=1000000007;
    int n,tmp=0;
    int a[101]={0};
    while (scanf("%d",&n)!=EOF) {
        a[n]+=1;
        tmp=max(tmp,a[n]);
    }
    for (int i=1;i<101;i++) {
        if (a[i]==tmp) {
            printf("%d\n",i);
        }
    }
    return 0;
}