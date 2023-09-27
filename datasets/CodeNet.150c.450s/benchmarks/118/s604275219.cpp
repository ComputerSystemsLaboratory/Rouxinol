#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <stack>
#include <functional>
#include <queue>
#include <cmath>
#include <set>
#include <map>
#include <numeric>

#define rep(i,j,k) for(int i=(int)j;i<(int)k;i++)
#define Sort(x) sort((x).begin(),(x).end())
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define vi vector<int>
#define INF (int)1e9
#define INFL 1e18
#define MOD 1000000007
#define pb push_back
#define MP make_pair
typedef long long int ll;
typedef std::pair<int,int> P;
int D=1;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};

using namespace std;

int main(){
    int day[]={20,19,20,19,20,19,20,19,20,19,20,19,20,19};
    int day3[]={20,20,20,20,20,20,20,20,20,20,20,20,20,20};
    int n;
    cin>>n;
    rep(p,0,n){
        int y,m,d;
        int ans=0;
        cin>>y>>m>>d;
        y--; m--; d--;
        while(1){
            rep(i,y,1001){
                if(i==1000){
                    cout<<ans-195<<endl;
                    goto A;
                }
                rep(j,m,10){
                    if((i+1)%3==0){
                        rep(k,d,day3[j])ans++;
                    }else {
                        rep(k,d,day[j])ans++;
                    }
                    d=0;
                }
                m=0;
            }
        }
        A:;
    }
    
    return 0;
}

