#include<iostream>
#include<climits>
#include<vector>
using namespace std;

enum Color{WHITE, GRAY, BLACK};
struct edge{
        int v,c;
        edge(int v, int c): v(v), c(c){}
};

int n;
vector<vector<edge>> a;
int *r;

void shortestPath(){
        int tmpcost[n];
        Color color[n];
        for(int i=0;i<n;i++) tmpcost[i]=INT_MAX;
        for(int i=0;i<n;i++) color[i]=WHITE;
        tmpcost[0] = 0;
        color[0] = GRAY;
        while(1){
                int mincost=INT_MAX, argmin=-1;
                for(int i=0;i<n;i++){
                        if(color[i]!=GRAY) continue;
                        if(mincost>tmpcost[i]){
                                mincost = tmpcost[i];
                                argmin = i;
                        }
                }
                if(argmin==-1) break;
                color[argmin] = BLACK;
                r[argmin] = mincost;

                for(int i=0;i<a[argmin].size();i++){
                        edge e = a[argmin][i];
                        if(color[e.v]==BLACK) continue;
                        color[e.v] = GRAY;
                        tmpcost[e.v] = tmpcost[e.v]<(mincost+e.c)? tmpcost[e.v] : (mincost+e.c);
                }

        }

}
int main(){
        int u,k,v,c;
        cin>>n;
        a = vector<vector<edge>>(n);
        r = new int [n];
        for(int i=0;i<n;i++){
                cin>>u>>k;
                for(int j=0;j<k;j++){
                        cin>>v>>c;
                        a[u].emplace_back(edge(v,c));
                }
        }

        shortestPath();

        for(int i=0;i<n;i++)
                cout<<i<<" "<<r[i]<<endl;
        return 0;
}


