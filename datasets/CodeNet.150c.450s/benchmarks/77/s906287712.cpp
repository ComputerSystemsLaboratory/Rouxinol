#include <iostream>
using namespace std;
int main()
{
    while(1)
    {
        int n;
        cin>>n;if(!n)return 0;
        bool map[21][21]={{false}};
        for(int i=0;i<n;++i){
            int x,y;
            cin>>x>>y;
            map[x][y]=true;
        }
        cin>>n;
        int xp=10,yp=10;
        for(int i=0;i<n;++i){
            char d;
            int v;
            cin>>d>>v;
            if(d=='N'){
                for(int j=0;j<v;++j){
                    yp++;
                    if(map[xp][yp])map[xp][yp]=false;
                }
            }
            if(d=='W'){
                for(int j=0;j<v;++j){
                    xp--;
                    if(map[xp][yp])map[xp][yp]=false;
                }
            }
            if(d=='E'){
                for(int j=0;j<v;++j){
                    xp++;
                    if(map[xp][yp])map[xp][yp]=false;
                }
            }
            if(d=='S'){
                for(int j=0;j<v;++j){
                    yp--;
                    if(map[xp][yp])map[xp][yp]=false;
                }
            }
        }
        bool flag=false;
        for(int i=0;i<21;++i){
            for(int j=0;j<21;++j){
                if(map[i][j])flag=true;
            }
        }
        if(flag)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}