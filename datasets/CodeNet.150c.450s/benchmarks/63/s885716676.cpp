#include<iostream>
#include<queue>
#include<utility>
using namespace std;

long int inf=100000*100000+100;
int main()
{
    int v,e,r;
    int s[500000];
    int t[500000];
    int d[500000];
    long int dis[100000];
    cin>>v>>e>>r;
    for(int i=0;i<e;i++)
    {
        cin>>s[i]>>t[i]>>d[i];
    }
    
    for(int i=0;i<v;i++)
    {
        dis[i]=inf;
    }
    dis[r]=0;
    
    for(int i=0;i<v-1;i++)
    {
        int end=1;
        for(int j=0;j<e;j++)
        {
            if(dis[t[j]]>dis[s[j]]+d[j])
            {
                dis[t[j]]=dis[s[j]]+d[j];
                end=0;
            }
        }
        
        if(end==1)
            break;
    }
    
    for(int i=0;i<v;i++)
    {
        if(dis[i]==inf)
            cout<<"INF"<<endl;
        else
            cout<<dis[i]<<endl;
    }
}