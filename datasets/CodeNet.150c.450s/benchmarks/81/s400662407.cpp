#include <iostream>
#include <vector>
#include<cmath>
using namespace std;

int INF=1e9;

int main(){
    while(true){

        vector<vector<int>> Load(100,vector<int>(100,INF)); 
        for(int i=0;i<20;i++){
            for(int j=0;j<20;j++){
                if(i==j) Load[i][j]=0;
            }
        }
        int n;
        cin>>n;
        if(n==0) break;
        int size=0;
        for(int i=0;i<n;i++){
            int a,b,c;
            
            cin>>a>>b>>c;
            size=max(size,max(a,b));
            Load[a][b]=c;
            Load[b][a]=c;
        }

        int FA=1e9;
        int num;
        int ans=0;
        for(int i=0;i<=size;i++){
            vector<int> d(13,INF);
            vector<bool>  u(100,false);
            d[i]=0;

            while(true){
                 int v=-1;
                    for(int j=0;j<=size;j++){
                        if(u[j]) continue;
                        if(v==-1||d[j]<d[v]) v=j;
                    }

                    if(v==-1) break;
                    u[v]=true;

                    for(int l=0;l<=size;l++){
                        if(d[l]>d[v]+Load[v][l]){
                            d[l]=d[v]+Load[v][l];
                        }
                    }
            }
            ans=0;
            for(int j=0;j<=size;j++)  ans+=d[j];
            if(FA>ans){
                num=i;
                FA=ans;
            }  
            //cout<<FA<<endl;   
        }

        cout<<num<<" "<<FA<<endl;
    }
}

