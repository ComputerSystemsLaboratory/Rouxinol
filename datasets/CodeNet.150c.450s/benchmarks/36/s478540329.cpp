#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;


int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        long ans=0;
        //printf("%d\n",n);
        for(int i=0;i<600;i+=n){
            ans+=i*i*n;
        }

        printf("%ld\n",ans);
    }
    return 0;
}