#include<bits/stdc++.h>
using namespace std;

#define int long long 

void read(int &x) {
    x=0;int f=1;char ch=getchar();
    for(;!isdigit(ch);ch=getchar()) if(ch=='-') f=-f;
    for(;isdigit(ch);ch=getchar()) x=x*10+ch-'0';x*=f;
}

void print(int x) {
    if(x<0) putchar('-'),x=-x;
    if(!x) return ;print(x/10),putchar(x%10+48);
}
void write(int x) {if(!x) putchar('0');else print(x);putchar('\n');}

#define lf double
#define ll long long 

#define pii pair<int,int >
#define vec vector<int >

#define pb push_back
#define mp make_pair
#define fr first
#define sc second

#define data asd09123jdf02i3h

#define FOR(i,l,r) for(int i=l,i##_r=r;i<=i##_r;i++)

const int maxn = 1e6+10;
const int inf = 1e9;
const lf eps = 1e-8;
const int mod = 1e9+7;

int n,a[maxn],t[100];
char s[maxn];

void add(int x) {
    for(int i=60;~i;i--) {
        if(!((x>>i)&1)) continue;
        if(!t[i]) {t[i]=x;break;}
        x^=t[i];
    }
}

int query(int x) {
    for(int i=60;~i;i--) if((x>>i)&1) x^=t[i];
    return x==0;
}

void solve() {
    read(n);
    for(int i=1;i<=n;i++) read(a[i]);
    scanf("%s",s+1);
    for(int i=0;i<=60;i++) t[i]=0;
    for(int i=n;i;i--) {
        if(s[i]=='0') add(a[i]);
        else if(!query(a[i])) return puts("1"),void();
    }
    puts("0");
}

signed main() {
    int t;read(t);while(t--) solve();
    return 0;
}
