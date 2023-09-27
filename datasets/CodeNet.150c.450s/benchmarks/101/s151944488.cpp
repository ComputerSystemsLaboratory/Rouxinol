#include<bits/stdc++.h>
using namespace std;
vector<int> graph[100000];

int fin[100000];

void dfs(int id,int group){
    fin[id] = group;
    for(int i = 0;i < graph[id].size();i++){
        if(fin[graph[id][i]] == 0)
            dfs(graph[id][i],group);
    }
}

int main(){
    int n,m;

    scanf("%d%d",&n,&m);

    for(int i = 0;i < m;i++){
        int a,b;
        scanf("%d%d",&a,&b);

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i = 0;i < n;i++){
        sort(&graph[i][0],&graph[i][graph[i].size()]);
    }

    int group = 1;
    while(true){
       int iii;
       for(iii = 0;iii < n;iii++){
           if(fin[iii] == 0){
               dfs(iii,group);
               break;
           }
       }
       if(iii == n)
          break;
       group++; 
    }

    int q;
    scanf("%d",&q);

    for(int i = 0;i < q;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        if(fin[a] == fin[b])
            printf("yes\n");
        else
            printf("no\n");
    }
}