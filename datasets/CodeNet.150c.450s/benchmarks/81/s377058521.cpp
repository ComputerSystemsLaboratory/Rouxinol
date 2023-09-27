#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

const int MAX_N=10;
const int INF=0x3f3f3f3f;
int dist[MAX_N][MAX_N];

int main(){

    int N;
    while((cin>>N)&&N>0){
        memset(dist, 0x3f, sizeof(dist));
        int u,v,w;
        for(int i=0; i<MAX_N; i++) dist[i][i]=0;
        int max_n=0;
        for(int i=0; i<N; i++){
            scanf("%d %d %d", &u, &v, &w);
            dist[u][v]=dist[v][u]=w;
            max_n=max(max_n, max(u,v)+1);
        }
        for(int i=0; i<max_n; i++){
            for(int j=0; j<max_n; j++){
                for(int k=0; k<max_n; k++)
                    dist[j][k]=min(dist[j][k], dist[j][i]+dist[i][k]);
            }
        }
        int res=INF;
        int min_ele=0;
        for(int i=0; i<max_n; i++){
            int tmp=0;
            for(int j=0; j<max_n; j++)
                tmp+=dist[i][j];
            if(tmp<res){
				res=tmp;
				min_ele=i;
			}
        }
        cout<<min_ele<<" "<<res<<endl;
    }

}
