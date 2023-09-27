#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb emplace_back
#define INF (1e9+1)
//#define INF (1LL<<59)


int h;

void del(vector<vector<int>> &v){
    rep(i,h){
        rep(j,5){
            
            int base = v[i][j];
            if(base==0)continue;
            int num = 0;
            rep(k,5){
                if(j+k>5)break;
                if(base==v[i][j+k])num++;
                else break;
            }
            if(num<3)continue;
            rep(k,5){
                if(j+k>5)break;
                if(base==v[i][j+k]){
                    v[i][j+k]=0;
                }else break;
            }
            
        }
    }
}

bool fall(vector<vector<int>> &v){
    bool ret = false;
    for(int i=h-2;i>=0;i--){
        rep(j,5){
            if(v[i+1][j]==0 && v[i][j]!=0){
                ret|=true;
                swap(v[i+1][j],v[i][j]);
            }
        }
    }
    return ret;
}


int main(){
    while(cin>>h&&h){
        int sum = 0;
        vector<vector<int>> fie(h,vector<int>(5));
        rep(i,h){
            rep(j,5){
                cin>>fie[i][j];
                sum+=fie[i][j];
            }
        }
        
        while(1){
            del(fie);
            
            bool res = false;
            rep(i,h)res |= fall(fie);
            if(res==false)break;
        }
        int t = 0;
        rep(i,h){
            rep(j,5){
                t+=fie[i][j];
            }
        }
    
        cout<<sum-t<<endl;
    }
}