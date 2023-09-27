#include <bits/stdc++.h>
#define MOD 1000000007
typedef long long ll;
using namespace std;

int H;

int board[11][6];

void solve(){
    for(int i=0;i<H;i++){
        for(int j=0;j<5;j++){
            cin>>board[i][j];
        }
    }

    int ans=0;
    while(1){
        bool change=false;
        bool dis[11][6]={};
        for(int i=0;i<H;i++){
            for(int j=0;j<5;j++){
                if(board[i][j]==0) continue;
                int x=j+1;
                int num=1;
                while(x<5){
                    if(board[i][j]==board[i][x]) num++;
                    else break;
                    x++;
                }
                if(num>=3){
                    for(int k=j;k<j+num;k++){
                        dis[i][k]=true;
                        change=true;
                    }
                }
            }
        }

        int nxboard[11][6]={};
        for(int i=0;i<H;i++){
            for(int j=0;j<5;j++){
                if(dis[i][j]) ans+=board[i][j];
            }
        }
        for(int j=0;j<5;j++){
            int high=H-1;
            for(int i=H-1;i>=0;i--){
                if(dis[i][j]) continue;
                nxboard[high][j]=board[i][j];
                high--;
            }
        }
        for(int i=0;i<H;i++) for(int j=0;j<5;j++) board[i][j]=nxboard[i][j];
        if(change==false) break;
    }
    cout<<ans<<endl;
}

int main(){
  while(1){
      cin>>H;
      if(H==0) break;
      solve();
  }

  return 0;
}

