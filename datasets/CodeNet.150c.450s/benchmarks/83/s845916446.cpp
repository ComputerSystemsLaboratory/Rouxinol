#include<iostream>
#include<map>
#include<deque>
#include<algorithm>
#include<string>
#include<cctype>
using namespace std;
#define REP(i,b,e) for(int i=(int)b;i<(int)e;i++)
#define Rep(i,n) REP(i,0,n)
typedef long long ll;

struct Item{
    int value;
    int weight;
};
int N,W;
Item items[102];
int C[102][10003];
//C[i][j]:=items[0]~[i]までを使って重さjまでのうちの価値の最大値
int main(){
    cin>>N>>W;
    REP(i,1,N+1){
        cin>>items[i].value>>items[i].weight;
    }
    REP(i,1,N+1){
        REP(j,0,W+1){
            int w=items[i].weight;
            int v=items[i].value;
            if(w<=j){
                C[i][j]=max(C[i-1][j],C[i-1][j-w]+v);
            }
            else C[i][j]=C[i-1][j];
        }
    }
    cout<<C[N][W]<<endl;

    return 0;
}

