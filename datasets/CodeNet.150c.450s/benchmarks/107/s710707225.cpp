#include"bits/stdc++.h"

using namespace std;

#define rep(i,n) for(int i=0;i<(int)(n);i++)
void sort2array(double *a,long *b,long n){
    for(int i=0;i<n;i++){
        b[i]=i;
    }
    sort(b,b+n,[a](long i,long j)->bool {return a[i]<a[j];} );
}
//bを何回足せばaを超えるか
int wtover(int a,int b){
    if(a%b>0)return (a/b)+1;
    else return a/b;
}
const int INF=100000001,ID_MAX=20;
int bi_e[ID_MAX]={0};
//2進数表示したときの最高桁
int bi_max(long n){
    int m=0;
    for(m;pow(2,m)<=n;m++);m=m-1;
    return m;
}
//bi_eに二進数表示したやつを代入
void bi_exs(long n){
    rep(i,ID_MAX){
        bi_e[i]=0;
    }
    if(n<pow(2,ID_MAX)){
        int m=bi_max(n);
        long l;
        for(m;m>-1;m--){
            l=pow(2,m);
            bi_e[m]=n/l;
            n=n%l;
        }
    }
}

const int N_MAX=1001;
char s[N_MAX],t[N_MAX];
int dp[N_MAX][N_MAX];

int rec(int i,int j){
    if(dp[i][j]>=0){
        return dp[i][j];
    }
    int res;
    if(i==0){
        res=j;
    }else if(j==0){
        res=i;
    }else if(s[i-1]==t[j-1]){
        res=rec(i-1,j-1);
    }else{
        res=min({rec(i-1,j),rec(i,j-1),rec(i-1,j-1)})+1;
    }
    return dp[i][j]=res;
}

int main(){
    int i;
    //入力
    cin>>s;
    cin>>t;
    //処理
    memset(dp,-1,sizeof(dp));
    //出力
    cout<<rec(strlen(s),strlen(t))<<endl;
}
