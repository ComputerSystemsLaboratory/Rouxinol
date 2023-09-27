#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n,n){
        int S=500;
        vector<vector<int>> field(S,vector<int>(S,-1));
        field[250][250]=0;
        for(int k=0;k<n-1;k++){
            int v,d;
            cin>>v>>d;
            int dx[]={0,1,0,-1};
            int dy[]={-1,0,1,0};
            for(int i=0;i<S;i++){
                for(int j=0;j<S;j++){
                    if(field[i][j]==v){
                        field[i+dx[d]][j+dy[d]]=k+1;

                    }
                }
            
            }
        }
        int top=500;
        int bot=0;
        int lef=500;
        int rig=0;
        for(int i=0;i<S;i++){
            for(int j=0;j<S;j++){
                if(field[i][j]!=-1){
                    top=min(top,i);
                    bot=max(bot,i);
                    lef=min(lef,j);
                    rig=max(rig,j);
                }
            }
        }
        cout<<rig-lef+1<<" "<<bot-top+1<<endl;

    }   

    return 0;
}