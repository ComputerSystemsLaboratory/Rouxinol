#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

void pr(int n){
    int ans=0;
    vector<bool> prime;
    for(int i=0;i<=n;i++){
        prime.push_back(true);
    }
    prime[0]=prime[1]=false;

    for(int i=2;i<=n;i++){
        if(prime[i]){
            for(int j=2;j*i<=n;j++){
                prime[i*j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]){
            ans++;
        }
    }
    printf("%d\n",ans);
}


int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        pr(n);
    }
    return 0;
}