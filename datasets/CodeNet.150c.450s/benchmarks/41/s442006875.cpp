#include <iostream>

using namespace std;
const int maxn=1e3;
int d[maxn][maxn];
const int INF=2147483647;
struct node{
    int from;
    int to;
    int cost;
}edge[9905];
//结构体存信息
int point, E;
bool find(){
    int tmp[maxn];
    fill(tmp,tmp+maxn,0);
    for(int i=0;i<point;i++){
        for(int j=0;j<E;j++){
            node e=edge[j];
            if(tmp[e.to]>tmp[e.from]+e.cost){
                tmp[e.to]=tmp[e.from]+e.cost;
                if(i==point-1)
                    return true;
            }
        }
    }
    return false;
}
int main(){
    cin>>point>>E;
    int temp=E;
    for(int i=0;i<point;i++){
        for(int j=0;j<point;j++){
            if(i==j)
                d[i][j]=0;
            else
                d[i][j]=INF;
        }
    }
    for(int i=0;i<E;i++){
        cin>>edge[i].from>>edge[i].to>>edge[i].cost;
        d[edge[i].from][edge[i].to]=edge[i].cost;
    }

     for(int k=0;k<point;k++){
         for(int i=0;i<point;i++){
             for(int j=0;j<point;j++){
                if(d[i][k]!=INF&&d[k][j]!=INF)
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
             }
         }
    }
    if(find()){
        cout<<"NEGATIVE CYCLE"<<endl;
        return 0;
    }
    for(int i=0;i<point;i++){
        for(int j=0;j<point;j++){
            if(j!=0)
            cout<<" ";
            if(d[i][j]>=INF){
                cout<<"INF";
            }
            else
                cout<<d[i][j];
        }
        cout<<endl;
    }
    return 0;
}

