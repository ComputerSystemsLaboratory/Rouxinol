#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    while(cin>>n,n){  //,演算子、最後の式を評価
        vector<vector<int>> graph(10,vector<int>(10,99999999));
        int used[10]={0};
        for(int i=0;i<n;i++){
            int a,b,c;
            cin>>a>>b>>c;
            graph[a][b]=c;
            graph[b][a]=c;
            used[a]++;
            used[b]++;
        }
        for(int i=0;i<10;i++){
            if(used[i])
                graph[i][i]=0;
        }
        for(int k=0;k<10;k++){
            for(int i=0;i<10;i++){
                for(int j=0;j<10;j++){
                    if(graph[i][j]>graph[i][k]+graph[k][j])
                        graph[i][j]=graph[i][k]+graph[k][j];
                }
            }
        }
        int min=99999999;
        int minpos;
        for(int i=0;i<10;i++){
            if(used[i]==0) continue;
            int sum=0;
            for(int j=0;j<10;j++){
                if(used[j]>0){
                    sum+=graph[i][j];
                }
            }
            if(min>sum){
                min=sum;
                minpos=i;
            }
        }
        cout<<minpos<<" "<<min<<endl;
    }
}

