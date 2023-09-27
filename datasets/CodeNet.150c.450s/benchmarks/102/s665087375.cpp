#include "bits/stdc++.h"

using namespace std;

#define rep(a,b) for(int (a)=0;(a)<(b);(a)++)

int main(){
    int w,h;
    while(cin>>w>>h){
        if(w==0 && h==0)break;
        int sx,sy;
        int sum=0;
        int dy[]={-1,0,1,0};
        int dx[]={0,-1,0,1};
    
    
        string data[30]={};
    
        for(int i=0;i<h;i++){
            cin>>data[i];
        }
    
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(data[i][j]=='@'){
                    sx=j;sy=i;
                    break;
                }
            }
        }
    
        bool visited[30][30]={};
    
        queue<pair<int,int> > que;
    
        que.push( pair<int,int>(sy,sx) );
        visited[sy][sx]=true;
    
        while(que.size()){
            int qff=que.front().first,qfs=que.front().second;
            sum++;
            rep(i,4){
                if( qff+dy[i]<h && qff+dy[i]>=0 && qfs+dx[i]<w && qfs+dx[i]>=0 && visited[ qff+dy[i] ][ qfs+dx[i] ]==false && data[ qff+dy[i] ][ qfs+dx[i] ]!='#' ){
                    que.push( pair<int,int>(qff+dy[i] , qfs+dx[i]) );
                    visited[ qff+dy[i] ][ qfs+dx[i] ]=true;
                }
            }
            
            que.pop();
        }
        cout<<sum<<endl;
        
//        rep(i,h){rep(j,w)cout<<(visited[i][j]?'*':'_');cout<<endl;}
    }
    
    return 0;
}