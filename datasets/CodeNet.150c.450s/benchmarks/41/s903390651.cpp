#include<bits/stdc++.h>
using namespace std;
#define INFTY 200000000000

int main(){
    int v,e;cin>>v>>e;
    long long dis[v][v];
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            if(i==j)dis[i][j] = 0;
            else dis[i][j] =  INFTY;      
        }     
    }
    for (int i = 0; i < e; i++)
    {
        int s,t;long long d;cin>>s>>t>>d;
        dis[s][t] = d;
    }
      
    
    for (int k = 0; k < v; k++)
    {
        for (int i = 0; i < v; i++)
        {
            for (int j = 0; j < v; j++)
            {
                if(i==j&&dis[i][j]<0){cout << "NEGATIVE CYCLE"<<endl;return 0;}
                if(dis[i][k]==INFTY||dis[k][j]==INFTY) continue;
                else dis[i][j] = min(dis[i][j],dis[i][k]+dis[k][j]);
            }         
        }        
    }
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            if(dis[i][j] == INFTY){cout << "INF";}
            else cout << dis[i][j];   
            if(j<v-1) cout<<" "; 
        }   
        cout << endl;
    }
    
    return 0;
}
