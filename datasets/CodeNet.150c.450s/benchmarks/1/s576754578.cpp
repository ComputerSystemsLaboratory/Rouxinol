#include<iostream>
#include<map>
#include<deque>
#include<algorithm>
#include<string>
#include<cctype>
#include<iomanip>
#include<vector>
#include<queue>

using namespace std;
#define REP(i,b,e) for(int i=(int)b;i<(int)e;i++)
#define rep0(i,n) REP(i,0,n)
#define rep1(i,n) REP(i,1,n+1)
#define shosu setprecision(10)
typedef long long ll;
typedef pair<ll,ll> P;
ll longinf=1ll<<60;

int n,A[100001],L[100001];//Aに数列の値を入れてLは増加部分列の最後の要素の最小値を保持する配列
int lis(){
    L[0]=A[0];
    int length=1;
    REP(i,1,n){
        if(L[length-1]<A[i]){
            L[length]=A[i];
            length++; //Lの最後の要素よりも大きいものが来たら増加列は増える
        }
        else{
            *lower_bound(L,L+length,A[i])=A[i];
            //そうでなければ、Lのうち、A[i]未満であるようなものの最大値をA[i]で置き換える
        }
    }
    return length;

}

int main(){
    cin>>n;
    rep0(i,n){
        cin>>A[i];
    }
    cout<<lis()<<endl;
    return 0;
}
