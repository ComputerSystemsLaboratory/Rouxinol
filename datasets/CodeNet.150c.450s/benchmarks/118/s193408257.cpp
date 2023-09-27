#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<map>
#include<algorithm>
#include<set>
#include <stdexcept>
#include<queue>
#define rep(i,N) for(int i=0;i<(N);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
using namespace std;
const long long MOD = 1e9 + 7;
const long long INF = 1e12;
const int inf = 1e9;
typedef long long ll;
typedef pair<int,int> P;
int ceil(int a,int b){// a以上でbの倍数の最小値を出力//
     return (a+b-1)/b*b;
}
int stoii(string s){//stoi関数の代用 文字列を数値として読み取りint型に変換//
    return atoi(s.c_str());
}
int L,p,N;
int A[10010],B[10010];
int main(){
    int n=0;
    int sum=0;
    for(int i=1;i<=999;i++){
        if(i%3==0) sum+=200;
        else sum+=195;
    }
    sum++;
    cin>>n;
    int y,m,d;
    for(int i=0;i<n;i++){
        int sum2=0;
        cin>>y>>m>>d;
        for(int j=1;j<=y-1;j++){
            if(j%3==0) sum2+=200;
            else sum2+=195;
        }
        if(y%3!=0){
            for(int k=1;k<=m-1;k++){
                if(k%2==0) sum2+=19;
                else sum2+=20;
            }
        }
        else{
            sum2+=(m-1)*20;        
        }
        sum2+=d;
        cout<<sum-sum2<<endl;
    }
    return 0;
}


