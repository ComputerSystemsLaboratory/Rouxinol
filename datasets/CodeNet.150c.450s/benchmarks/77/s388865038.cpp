#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <climits>

#define LP(i,n) for(int i=0;i<n;i++)
#define Mset(x,v) memset(x,v,sizeof(x))

using namespace std;
using LL=long long;

int F[21][21];

int main(){
    int n,m,x,y,d,cnt;
    string c;
    while(1){
        cin>>n;
        if(!n) break;
        cnt=0;
        for(int i=0;i<21;i++) for(int j=0;j<21;j++) F[i][j]=0;
        for(int i=0;i<n;i++){
            cin>>x>>y;
            F[y][x]=1;
        }
        cin>>m;
        x=y=10;
        for(int i=0;i<m;i++){
            cin>>c>>d;
            if(c=="N"){
                for(int j=0;j<=d;j++){
                    if(F[y+j][x]){
                        cnt++;
                        F[y+j][x]=0;
                    }
                }
                y+=d;
            }
            else if(c=="S"){
                for(int j=0;j<=d;j++){
                    if(F[y-j][x]){
                        cnt++;
                        F[y-j][x]=0;
                    }
                }
                y-=d;
            }
            else if(c=="W"){
                for(int j=0;j<=d;j++){
                    if(F[y][x-j]){
                        cnt++;
                        F[y][x-j]=0;
                    }
                }
                x-=d;
            }
            else if(c=="E"){
                for(int j=0;j<=d;j++){
                    if(F[y][x+j]){
                        cnt++;
                        F[y][x+j]=0;
                    }
                }
                x+=d;
            }
        }
        if(cnt==n) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}

