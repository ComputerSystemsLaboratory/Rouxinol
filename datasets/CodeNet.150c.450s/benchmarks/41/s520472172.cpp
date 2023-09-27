#include<bits/stdc++.h>  
typedef long long ll;  
using namespace std;  
  
const ll INF = 1LL<<32;  
  
int n,e;  
  
ll dp[110][110];  
  
void floyd(){  
    for(int k = 0 ; k<n ; k++){  
        for(int i = 0 ; i<n ; i++){  
            if(dp[i][k] == INF)  
                continue;  
            for(int j = 0 ; j<n ; j++){  
                if(dp[k][j] == INF)  
                    continue;  
                dp[i][j] = min(dp[i][j] , dp[i][k]+dp[k][j]);  
            }  
        }  
    }  
}  
  
int main(){  
    ios::sync_with_stdio(false);  
    cin>>n>>e;  
      
    for(int i = 0 ; i<n ; i++){  
        for(int j = 0 ; j<n ; j++){  
            if(i == j)  
                dp[i][j] = 0;  
            else  
                dp[i][j] = INF;   
        }  
    }  
      
    for(int i = 0 ; i<e ; i++){  
        int s,t,d;  
        cin>>s>>t>>d;  
        dp[s][t] = d;  
    }  
      
    floyd();  
      
    bool flag = 0;  
    for(int i = 0 ; i<n ; i++){  
        if(dp[i][i] < 0){  
            flag = 1;  
            break;  
        }  
    }  
    if(flag){  
        cout<<"NEGATIVE CYCLE"<<endl;  
    }  
    else{  
        for(int i = 0 ; i<n ; i++){  
            for(int j = 0 ; j<n ; j++){  
                if(j) cout<<" ";  
                if(dp[i][j] == INF){  
                    cout<<"INF";  
                }  
                else  
                    cout<<dp[i][j];  
            }  
            cout<<endl;  
        }  
    }  
      
    return 0;  
}  

