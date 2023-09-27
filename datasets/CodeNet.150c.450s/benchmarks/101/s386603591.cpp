
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<stack>
#include<vector>

#define NIL -1
int color[100000];
std::vector<int>V[100005];

void dfs(int i,int id){
    std::stack<int>S;
    S.push(i);
    color[i]=id;
    int j;
    while(!S.empty()){
        int top=S.top();
        S.pop();
        for(j=0;j<V[top].size();j++){
            if(color[V[top][j]]==NIL){
                color[V[top][j]]=id;
                S.push(V[top][j]);
            }
        }
    }
}
int main(){
    int n,m,i;
    scanf("%d %d",&n,&m);
    
    for(i=1;i<=m;i++){
        int s,t;
        scanf("%d %d",&s,&t);
        V[s].push_back(t);
        V[t].push_back(s);
    }
    for(i=0;i<=n-1;i++)color[i]=NIL;
    int id=1;
    for(i=0;i<=n-1;i++){
        if(color[i]==NIL){
            id++;
            dfs(i,id);
        }
    }
    
    int q;
    scanf("%d",&q);
    for(i=1;i<=q;i++){
        int s,t;
        scanf("%d %d",&s,&t);
        if(color[s]==color[t])printf("yes");
        else printf("no");
        printf("\n");
    }
    return 0;
}