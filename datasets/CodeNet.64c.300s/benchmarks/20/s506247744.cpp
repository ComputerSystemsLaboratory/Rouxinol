#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;


int main(){
    int d;
    while(scanf("%d",&d)!=EOF){
        int ans=0;
        for (int i=1;i<600/d;i++) {
            ans+=(d*i)*(d*i)*d;
        }
    printf("%d\n",ans);
    }
    return 0;
}