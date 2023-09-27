#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
    int N,x,y,M,l;
    char d;
    map<char,int> D;
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    D['E']=0; D['W']=1; D['N']=2; D['S']=3;
    while(cin>>N,N){
        bool a[21][21]={};
        rep(i,N){
            cin>>x>>y;
            a[x][y]=true;
        }
        x=y=10;
        cin>>M;
        rep(i,M){
            cin>>d>>l;
            while(l--){
                if(a[x+=dx[D[d]]][y+=dy[D[d]]]){
                    a[x][y]=false;
                    N--;
                }
            }
        }
        cout<<(N?"No":"Yes")<<endl;
    }
    return 0;
}