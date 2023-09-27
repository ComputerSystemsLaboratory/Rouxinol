#include<iostream>
#include<cstdio>

using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int n;
int add[24*60*60+10];

void solve() {
    rep(i,24*60*60+5) add[i]=0;
    
    rep(i,n) {
        int s1,s2,s3;
        int t1,t2,t3;
        scanf("%d:%d:%d",&s1,&s2,&s3);
        scanf("%d:%d:%d",&t1,&t2,&t3);

        add[s1*60*60+s2*60+s3] += 1;
        add[t1*60*60+t2*60+t3] += -1;
    }
    rep(i,24*60*60+5) {
        add[i+1]+=add[i];
    }

    int ans=0;
    rep(i,24*60*60+5) {
        ans=max(ans,add[i]);
    }
    cout<<ans<<endl;

    

}

int main() {
    while(cin>>n) {
        if(!n) return 0;
        solve();
    }

    return 0;
}