#include <bits/stdc++.h>

using namespace std;

#define INF 1e9

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    while(1){
        int h;
        cin>>h;

        if(h==0)break;

        int c[15][5]={};

        for(int i=0;i<h;i++){
            for(int j=0;j<5;j++){
                cin>>c[i][j];
            }
        }
        
        int ans=0;

        while(1){
            bool f=true;

            for(int i=0;i<h;i++){
                int t=1;
                for(int j=0;j<4;j++){
                    if(c[i][j]==c[i][j+1] && c[i][j]!=0)t++;
                    else{
                        if(t<3)t=1;
                        else{
                            ans+=c[i][j-1]*t;
                            for(int k=0;k<t;k++)c[i][j-k]=0;
                            f=false;
                            t=1;
                        }
                    }
                }
                if(t>2){
                    ans+=c[i][4]*t;
                    for(int j=0;j<t;j++){
                        c[i][4-j]=0;
                    }
                    f=false;
                }
            }

            for(int i=h-2;i>=0;i--){
                for(int j=0;j<5;j++){
                    for(int k=1;i+k<h;k++){
                        if(c[i+k][j]==0){
                            c[i+k][j]=c[i+k-1][j];
                            c[i+k-1][j]=0;
                        }
                    }
                }
            }

            if(f){
                cout<<ans<<endl;

                break;
            }

        }

    }
}
