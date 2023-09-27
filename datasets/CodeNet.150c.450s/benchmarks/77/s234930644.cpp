#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <algorithm>
#include <sstream>
#include <cmath>
#include <set>
#include <cstdio>

using namespace std;

#define REP(i,n) for(int (i)=0;(i)<(int)(n);(i)++)
#define RREP(i,n) for(int (i)=(int)(n)-1;(i)>=0;(i)--)
#define REMOVE(Itr,n) (Itr).erase(remove((Itr).begin(),(Itr).end(),n),(Itr).end())
#define PB_VEC(Itr1,Itr2) (Itr1).insert((Itr1).end(),(Itr2).begin(),(Itr2).end())
#define UNIQUE(Itr) sort((Itr).begin(),(Itr).end()); (Itr).erase(unique((Itr).begin(),(Itr).end()),(Itr).end())

typedef long long ll;

int main(){
    
    
    while(true){
        int N;
        cin>>N;
        if(N==0)break;
    
        map<pair<int,int>,bool> p;
        REP(i,N){
            int a,b;
            cin>>a>>b;
            p[make_pair(a,b)]=false;
        }
        
        int M;
        cin>>M;
        int x=10,y=10;
        REP(i,M){
            char dire;
            int dist;
            cin>>dire>>dist;
            REP(j,dist){
                if(dire=='N')y++;
                if(dire=='S')y--;
                if(dire=='E')x++;
                if(dire=='W')x--;
                if(p.find(make_pair(x,y))!=p.end()){
                    p[make_pair(x,y)]=true;
                }
            }
        }
        
        bool flag=false;
        for(auto itr=p.begin();itr!=p.end();itr++){
            if(!itr->second)flag=true;
        }
        
        if(flag)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
        
    }
    
    return 0;
}