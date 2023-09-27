#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(i,x,n) for(int i=x;i<(int)(n);++i)
#define all(x) (x).begin(),(x).end()
const int mod=1000000007,MAX=100005,INF=1<<29;

int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(1){
        int H;cin>>H;
        if(H==0) break;
        
        vector<vector<int>> S(H,vector<int>(5));
        
        for(int i=0;i<H;i++){
            for(int j=0;j<5;j++){
                cin>>S[i][j];
            }
        }
        
        int score=0;
        
        while(1){
            bool ok=false;
            
            for(int i=0;i<H;i++){
                if(S[i][2]==0) continue;
                int l=2,r=2;
                while(l>=0&&S[i][l]==S[i][2]) l--;
                while(r<5&&S[i][r]==S[i][2]) r++;
                
                l++;
                r--;
                
                if(r-l>=2){
                    score+=S[i][2]*(r-l+1);
                    for(int j=l;j<=r;j++) S[i][j]=0;
                    ok=true;
                }
            }
            
            if(!ok) break;
            
            for(int k=0;k<H;k++){
                for(int i=H-1;i>0;i--){
                    for(int j=0;j<5;j++){
                        if(S[i][j]==0){
                            S[i][j]=S[i-1][j];
                            S[i-1][j]=0;
                        }
                    }
                }
            }
            
        }
        
        cout<<score<<endl;
    }
    
}

