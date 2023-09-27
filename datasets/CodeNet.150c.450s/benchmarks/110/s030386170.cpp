#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>

typedef long long ll;

using namespace std;

int mo[4]={0,1,0,-1};

int main(){
    int h,w,n,ans=0;
    bool fl[1000][1000]={0};
    char in[1000][1001];
    queue<pair<int,int> > qp;
    pair<int,int> p;
    
    scanf("%d%d%d",&h,&w,&n);
    
    for(int i=0;i<h;i++)
        scanf("%s",in[i]);
    
    for(int i=0;i<h;i++)
        for(int j=0;j<w;j++)
            if(in[i][j]=='S'){
                qp.push(make_pair(i,j));
                qp.push(make_pair(-5,-5));
                break;
            }
    
    for(int i=1;i<=n;i++){
        while(1){
            p=qp.front();
            qp.pop();
            if(p.first==-5 && p.second==-5){
                ans++;
                qp.push(make_pair(-5,-5));
                continue;
            }
            if(p.first<0 || h<=p.first || p.second<0 || w<=p.second || fl[p.first][p.second]) continue;
            if(in[p.first][p.second]=='0'+i) break;
            if(in[p.first][p.second]=='X') continue;
            
            fl[p.first][p.second]=true;
            
            for(int j=0;j<4;j++)
                qp.push(make_pair(p.first+mo[j],p.second+mo[(j+1)%4]));
            
        }
        while(!qp.empty())
            qp.pop();
        qp.push(make_pair(p.first,p.second));
        qp.push(make_pair(-5,-5));
        
        for(int k=0;k<h;k++)
            for(int j=0;j<w;j++)
                fl[k][j]=false;
    }
            
    printf("%d\n",ans);
    
    return 0;
}