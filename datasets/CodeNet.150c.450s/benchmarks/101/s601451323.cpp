#include<cstdio>
#include<queue>

using namespace std;

static const int N = 100000;

int m,n;

queue<int> Q[N];
int color[N];

void visit(int a,int c){
    color[a] = c;
   while( !(Q[a].size() == 0) ){
        int u = Q[a].front();
        if(color[u] == 0) visit(u,c);
        Q[a].pop();
    }
}

int main(){
    scanf("%d",&n);
    scanf("%d",&m);

    for(int i=0; i<n; i++) color[i] = 0;

    for(int i=0; i<m;i++){
        int u,v;
        scanf("%d",&u);
        scanf("%d",&v);
        Q[u].push(v);
        Q[v].push(u);
    }
    
    int cc = 1;

    for(int i=0; i<n; i++){
        if(color[i] == 0){
            visit(i,cc);
            cc++;
        }
    }

    int l; 
    scanf("%d",&l);
    for(int i =0 ;i<l;i++){
        int x,y;
        scanf("%d",&x);
        scanf("%d",&y);

        if(color[x] == color[y]) printf("yes\n");
        else printf("no\n");

    }

}
