#include<cstdio>
#include<algorithm>
using namespace std;

int solve(int n,int m){
    pair<int,int> s[10000];
    int ans=0;
    for(int i=0;i<n;i++){
        scanf("%d",&s[i].second);
        scanf("%d",&s[i].first);
        ans+=s[i].first*s[i].second;
    }
    sort(s,s+n);
    reverse(s,s+n);
    for(int i=0;i<n&&m>0;i++){
        if(m>s[i].second){
            ans-=s[i].first*s[i].second;
            m-=s[i].second;
        }else{
            ans-=s[i].first*m;
            m=0;
        }
    }
    return ans;
}

int main(){
    while(1){
        int n,m;
        scanf("%d %d",&n,&m);
        if(n==0&&m==0) return 0;
        printf("%d\n",solve(n,m));
    }
}