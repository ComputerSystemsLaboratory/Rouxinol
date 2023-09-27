#include<cstdio>
#include<algorithm>
using namespace std;
long long w[220], P[61];
int n;
char p[220];
bool OK(int pv){
    long long x = w[pv];
    for(int i=60;i>=0;i--){
        if((x>>i)&1){
            if(!P[i]){
                if(p[pv]=='1')return false;
                P[i]=x;
                return true;
            }
            x^=P[i];
        }
    }
    return true;
}
void Solve(){
    int i;
    for(i=0;i<=60;i++)P[i]=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%lld",&w[i]);
    scanf("%s",p);
    for(i=n-1;i>=0;i--){
        if(!OK(i)){
            puts("1");
            return;
        }
    }
    puts("0");
}
int main(){
    int TC;
    scanf("%d",&TC);
    while(TC--){
        Solve();
    }
}
