#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> P;

#define MAX 1145141919810

int main(){
        int v,e;
        cin>>v>>e;
        vector<vector<ll> >graph(v,vector<ll>(v,MAX));
        vector<ll>s(e),t(e),d(e);
        for(ll i=0;i<v;i++)graph[i][i]=0;
        for(ll i=0;i<e;i++){
                cin>>s[i]>>t[i]>>d[i];
                graph[s[i]][t[i]]=d[i];
        }
        for(ll k=0;k<v;k++){
                for(ll i=0;i<v;i++){
                        for(ll j=0;j<v;j++){
                                if(graph[i][k]!=MAX&&graph[k][j]!=MAX)graph[i][j]=min(graph[i][j],graph[i][k]+graph[k][j]);
                                if(i==j&&graph[i][j]<0) return !(cout<<"NEGATIVE CYCLE"<<endl);
                        }
                }
        }

        for(ll i=0;i<v;i++){
                for(ll j=0;j<v;j++){
                        if(graph[i][j]==MAX)cout<<"INF";
                        else cout<<graph[i][j];
                        if(j!=v-1)cout<<" ";
                        else cout<<endl;
                }
        }
        return 0;
}

