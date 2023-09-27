#include<iostream>
using namespace std;

static const int N=100;
static const int INFTY=2001;
static const int WHITE=0;//未探索
static const int GRAY=1;//MSTに隣接
static const int BLACK=2;//MSTに含まれる

int n,v,M[N][N];

int prim(){
    int sum_weight; //MSTの辺の重みの総和
    int cost[N]; //MSTから頂点に伸びている辺の重みの最小値をその頂点に保持する
    int color[N]; //MSTか、MSTに隣接しているか、それ以外か
    //初期化
    for(int i=0;i<n;i++){
        cost[i]=INFTY;
        color[i]=WHITE;
    }
    cost[0]=0;
    color[0]=GRAY;
    sum_weight=0;

    while(true){
        int vertex=-1;//次に含む頂点の候補
        int min_cost=INFTY;//次に選ぶ辺の最小コスト
        for(int i=0;i<n;i++){
            //MSTに隣接した頂点から最小コストのものを探す
            if(color[i]==GRAY&&cost[i]<min_cost){
                min_cost=cost[i];
                vertex=i;
            }
        }
        //T(部分グラフ)＝Vなら終了
        if(vertex==-1) break;
        //該当の頂点がある場合
        color[vertex]=BLACK;
        sum_weight+=cost[vertex];

        //vertexをMSTに含めたために、それによる他の頂点の最小コストの変化と状態を更新
        for(int i=0;i<n;i++){
            if(color[i]!=BLACK&&M[vertex][i]<INFTY){
                color[i]=GRAY;
                if(cost[i]>M[vertex][i]) cost[i]=M[vertex][i];
            }
        }
    }
    return sum_weight;
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v;
            if(v==-1) M[i][j]=INFTY;
            else M[i][j]=v;
        }
    }

    cout<<prim()<<endl;
}
