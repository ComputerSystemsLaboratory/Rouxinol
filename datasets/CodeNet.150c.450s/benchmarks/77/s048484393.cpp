#include "bits/stdc++.h"

using namespace std;

typedef pair<int, int> P;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

    int n;
    while(cin>>n,n){
        vector<P> gems;
        for(int i=0;i<n;i++){
            int x,y;cin>>x>>y;
            gems.push_back(P(x,y));
        }
        int rx=10,ry=10;
        int m;cin>>m;
        vector< vector<int> > visited(30,vector<int>(30,0));
        visited[rx][ry]=1;
        for(int i=0;i<m;i++){
            string s;cin>>s;int l;cin>>l;
            if(s=="N"){
                for(int i=0;i<l;i++){
                    ry++;
                    visited[rx][ry]=1;
                }
            }
            else if(s=="E"){
                for(int i=0;i<l;i++){
                    rx++;
                    visited[rx][ry]=1;
                }
            }
            else if(s=="S"){
                for(int i=0;i<l;i++){
                    ry--;
                    visited[rx][ry]=1;
                }
            }
            else{
                for(int i=0;i<l;i++){
                    rx--;
                    visited[rx][ry]=1;
                }
            }
        }
        bool flag=true;
        for(int i=0;i<n;i++){
            int x=gems[i].first,y=gems[i].second;
            if(!visited[x][y]) flag=false;
        }
        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}