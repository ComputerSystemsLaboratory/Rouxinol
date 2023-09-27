#include<bits/stdc++.h>
using namespace std;

#define int long long
typedef vector<int>vint;
typedef pair<int,int>pint;
typedef vector<pint>vpint;
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
#define all(v) (v).begin(),(v).end()
#define each(it,v) for(__typeof((v).begin()) it=(v).begin();it!=(v).end();it++)
#define pb push_back
#define fi first
#define se second
template<typename A,typename B>inline void chmin(A &a,B b){if(a>b)a=b;}
template<typename A,typename B>inline void chmax(A &a,B b){if(a<b)a=b;}

int dat[2000010];
int r=0;

void push(int a){
    dat[r]=a;
    int k=r;
    while(k&&dat[(k-1)/2]<dat[k]){
        swap(dat[(k-1)/2],dat[k]);
        k=(k-1)/2;
    }
    r++;
}

int pop(){
    int ret=dat[0];
    r--;
    dat[0]=dat[r];
    dat[r]=LLONG_MIN;
    int k=0;
    while(true){
        if(k*2+1>2000000)break;
        if(max(dat[k*2+1],dat[k*2+2])<=dat[k])break;
        if(dat[k*2+1]>=dat[k*2+2]){
            swap(dat[k],dat[k*2+1]);
            k=k*2+1;
        }
        else{
            swap(dat[k],dat[k*2+2]);
            k=k*2+2;
        }
    }
    return ret;
}

signed main(){
    fill_n(dat,2000010,LLONG_MIN);
    char str[10];
    while(scanf("%s",str),str[2]!='d'){
        if(str[0]=='i'){
            int a;
            scanf("%lld",&a);
            push(a);
        }
        else{
            printf("%lld\n",pop());
        }
    }
    return 0;
}