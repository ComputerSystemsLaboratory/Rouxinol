#include <cstdio>

#define reep(i,n,m) for(int i=(n);i<(m);i++)
#define rep(i,n) reep(i,0,n)

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int ans=0;
        rep(a,10){
            rep(b,10){
                rep(c,10){
                    rep(d,10){
                        if(a+b+c+d==n)
                            ans++;
                    }
                }
            }
        }

        printf("%d\n",ans);
    }
}