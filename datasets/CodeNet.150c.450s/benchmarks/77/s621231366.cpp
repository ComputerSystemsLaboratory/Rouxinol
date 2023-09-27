#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <functional>
#include <stack>
#include <queue>
#include <deque>

#define rep(i,j,k) for(int i=j;i<k;i++)
#define INF 2*1e9
#define pb push_back
#define mp make_pair
#define Sort(v) sort(v.begin(),v.end());
#define SSort(v) sort(v.begin(),v.end(),greater<int>); 
using namespace std;
int main(void){
    while(1){
        int n;
        int rx=10,ry=10;
        cin>>n;
        if(n==0)break;
         vector<vector<int>> v(21,vector<int> (21,0));
        rep(i,0,n){
            int x,y;
            cin>>x>>y;
            v[x][y]=1;
        }
        
        int m;
        cin>>m;
        rep(i,0,m){
            char c;
            int x;
            cin>>c>>x;
            rep(j,0,x){
                if(c=='N')ry++;
                else if(c=='E')rx++;
                else if(c=='S')ry--;
                else if(c=='W')rx--;
                v[rx][ry]=0;
            }
        }
        
        rep(i,0,21){
            rep(j,0,21){
                if(v[i][j]==1){
                    cout<<"No"<<endl;
                    goto AWAY;
                }
            }
        }
        cout<<"Yes"<<endl;
        
        AWAY:;
    }
}