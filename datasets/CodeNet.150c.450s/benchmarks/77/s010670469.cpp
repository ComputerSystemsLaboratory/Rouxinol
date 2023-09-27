#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb emplace_back
#define INF (1e9+1)
//#define INF (1LL<<59)

int main(){
    int n;
    while(cin>>n&&n){
        vector<vector<int>> fie(30,vector<int>(30,0));
        rep(i,n){
            int x,y;
            cin>>x>>y;
            fie[y][x]++;
        }
        
        
        int tx=10,ty=10;
        int m;
        cin>>m;
        rep(i,m){
            char dir;
            int dist;
            cin>>dir>>dist;
            int dy[]={1,0,-1,0};
            int dx[]={0,1,0,-1};
            map<char,int> mp;
            mp['N']=0;
            mp['E']=1;
            mp['S']=2;
            mp['W']=3;
            
            int d = mp[dir];
            for(int k=1;k<=dist;k++){
                tx+=dx[d];
                ty+=dy[d];
                n-=fie[ty][tx];
                fie[ty][tx]=0;
            }
        }
        if(n==0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}