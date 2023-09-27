#include<cstdio>
#include<vector>
#include<stack>
using namespace std;
int n;
vector<int> a[100000];
int b[100000];
void dfs(int r,int c){
    stack<int> x;
    x.push(r);
    b[r]=c;
    while(!x.empty()){
        int s=x.top();
        x.pop();
        for(int i=0;i<a[s].size();i++){
            int v=a[s][i];
            if(b[v]==-1){
                b[v]=c;
                x.push(v);
            }
        }
    }
}
void pengyou(){
    int id =1;
    for(int i=0;i<n;i++)b[i]=-1;
    for(int i=0;i<n;i++){
        if(b[i]==-1)dfs(i,id++);
    }
}

int main(){
    int m;
    int s,t;
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++){
        scanf("%d%d",&s,&t);
        a[s].push_back(t);
        a[t].push_back(s);
    }
    pengyou();
    int q;
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        scanf("%d%d",&s,&t);
        if(b[t]==b[s])printf("yes\n");
        else printf("no\n");


    }

}