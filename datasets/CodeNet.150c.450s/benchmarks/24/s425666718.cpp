#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m;
ll ds[11];
  
int main(){
while(true){
scanf("%d%d", &n, &m);
if(n+m==0)return 0;
for(int i=0;i<=10;i++)ds[i]=0;
while(n--){
ll d;
int x;
scanf("%lld%d",&d,&x);
ds[x] += d;
}
ll ans = 0;
for(int i=10;i>=0;i--){
ll use = min((ll)m, ds[i]);
ds[i] -= use;
m -= use;
ans += i * ds[i];
}
printf("%lld\n", ans);
  
}
}

