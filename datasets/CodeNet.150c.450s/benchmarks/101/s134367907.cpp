#include<iostream>
#include<vector>
using namespace std;

vector<int> *v;
int *color;
int n;

void dfs(int i, int c){
        if(color[i]==c) return;
        color[i]=c;
        for(int j=0;j<v[i].size();j++)
                dfs(v[i][j], c);
}

void assignColor(){
        int c = 1;
        for(int i=0;i<n;i++){
                if(color[i]!=0) continue;
                dfs(i,c);
                c++;
        }

}

int main(){
        int m,q,a,b;
        cin>>n>>m;
        v = new vector<int>[n];
        color = new int[n];
        for(int i=0;i<m;i++){
                cin>>a>>b;
                v[a].emplace_back(b);
                v[b].emplace_back(a);
        }
        for(int i=0;i<n;i++) color[i] = 0;

        assignColor();

        cin>>q;
        for(int i=0;i<q;i++){
                cin>>a>>b;
                if(color[a]==color[b]) cout<<"yes"<<endl;
                else cout<<"no"<<endl;
        }

        return 0;
}
