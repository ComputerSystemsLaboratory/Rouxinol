//
//  single_source_shortest_path.cpp
//  
//
//  Created by Yoshida Satoshi on 2018/11/10.
//

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>

#define MAX 3000
#define INF 20000000

using namespace std;

typedef long long ll;

int main()
{
    int V,E,r;
    ll s[MAX],t[MAX],d[MAX];
    cin>>V>>E>>r;
    for(int i=0;i<E;i++) cin>>s[i]>>t[i]>>d[i];
    
    ll min[MAX];
    for(int i=0;i<V;i++) if(i!=r) min[i]=INF;
    
    min[r]=0;
    
    bool flag;
    for(int cnt=0;cnt<V;cnt++)
    {
        flag=false;
        for(int i=0;i<E;i++)
        {
            if(min[s[i]]!=INF&&min[t[i]]>min[s[i]]+d[i])
            {
                min[t[i]]=min[s[i]]+d[i];
                flag=true;
            }
        }
    }
    
    if(flag) cout<<"NEGATIVE CYCLE"<<endl;
    else
    {
        for(int i=0;i<V;i++)
        {
            if(min[i]==INF) cout<<"INF"<<endl;
            else            cout<<min[i]<<endl;
        }
    }
    
    return 0;
}

