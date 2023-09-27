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
#include <iomanip>

using namespace std;

#define REP(i,n) for(int (i)=0;(i)<(int)(n);(i)++)
#define RREP(i,n) for(int (i)=(int)(n)-1;(i)>=0;(i)--)
#define REMOVE(Itr,n) (Itr).erase(remove((Itr).begin(),(Itr).end(),n),(Itr).end())
#define PB_VEC(Itr1,Itr2) (Itr1).insert((Itr1).end(),(Itr2).begin(),(Itr2).end())
#define UNIQUE(Itr) sort((Itr).begin(),(Itr).end()); (Itr).erase(unique((Itr).begin(),(Itr).end()),(Itr).end())

typedef long long ll;

vector<string> M;

int main(){

    
    while(true){
    int w,h;
    cin>>w>>h;
        
        if(w==0&&h==0)break;
        
    M.clear();
        
    REP(i,h){
        string s; cin>>s;
        M.push_back(s);
    }
    
    int x,y = 0;
    for(x=0;x<w;x++){
        for(y=0;y<h;y++){
            if(M[y][x]=='@')goto nexts;
        }
    }
    
nexts:;
    
    int ans=0;
    stack<pair<int,int>> sta;
    sta.push(make_pair(x,y));
    while(sta.size()!=0){
        int xt=sta.top().first,yt=sta.top().second;
        sta.pop();
        
        if(M[yt][xt]=='.'){
            M[yt][xt]= '#';
            ans++;
        }
        
        if(xt<w-1)if(M[yt][xt+1]=='.')sta.push(make_pair(xt+1,yt));
        if(xt>0)if(M[yt][xt-1]=='.')sta.push(make_pair(xt-1,yt));
        if(yt<h-1)if(M[yt+1][xt]=='.')sta.push(make_pair(xt,yt+1));
        if(yt>0)if(M[yt-1][xt]=='.')sta.push(make_pair(xt,yt-1));
        
    }
    
    cout<<ans+1<<endl;
    }
    
    return 0;
}