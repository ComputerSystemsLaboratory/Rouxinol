#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    while(1){
        cin>>n;
        if(n==0){break;}
        int ma[22][22]={};
        int x,y;
        for(int i=0;i<n;i++){
            cin>>x>>y;
            ma[x][y]++;
        }
        cin>>m;
        char d;
        int l;
        int sx=10,sy=10;
        int count=0;
        for(int i=0;i<m;i++){
            cin>>d>>l;
            if(d=='N'){
                for(int j=0;j<l;j++){
                    sy++;
                    if(ma[sx][sy]==1){
                        ma[sx][sy]--;
                        count++;
                    }
                }
            }
            else if(d=='E'){
                for(int j=0;j<l;j++){
                    sx++;
                    if(ma[sx][sy]==1){
                        ma[sx][sy]--;
                        count++;
                    }
                }
            }
            else if(d=='S'){
                for(int j=0;j<l;j++){
                    sy--;
                    if(ma[sx][sy]==1){
                        ma[sx][sy]--;
                        count++;
                    }
                }
            }
            else if(d=='W'){
                for(int j=0;j<l;j++){
                    sx--;
                    if(ma[sx][sy]==1){
                        ma[sx][sy]--;
                        count++;
                    }
                }
            }
        }
        if(count==n){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
    return 0;
}

