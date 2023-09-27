#include<iostream>
#include<cstdio>
#include<set>
#include<map>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<cassert>
#include<string>
#include<vector>
#include<queue>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 1000000005
#define rep(i,n) for(int i = 0;i < n;i++)
using namespace std;
typedef long long int ll;
typedef pair<int,int> PI;

int n;
int m[12][5];//???????????????
int erase(){
    int ret = 0;
    rep(i,n){
        int now = 0;
        int left = 0;
        while(now<5){
            while(now<5&&m[i][left]==m[i][now])now++;
            if(now-left<3){
                left=now;
            }else{
                while(left<now){
                    ret += m[i][left];
                    m[i][left]=0;
                    left++;
                }
            }
        }
    }
    return ret;
}
void down(){
    rep(j,5){
        int down = 0;
        int now = 0;
        while(now<n){
            while(now<n&&!m[now][j])now++;
            if(now==n){
                break;
            }
            m[down][j]=m[now][j];
            if(down<now){
                m[now][j]=0;
            }
            down++;
            now++;
        }
    }
    return;
}

void show(){
    rep(i,n){
        rep(j,5){
            cout<<m[n-1-i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main(){
    while(1){
        cin>> n;
        if(!n)
            break;
        rep(i,11){rep(j,5)m[i][j]=0;}
        rep(i,n){
            rep(j,5){cin>>m[n-1-i][j];}
        }
        int ans = 0;
        int temp;
        while(1){
            temp = erase();
//            show();
            ans += temp;
            if(!temp){
                break;
            }
            down();
//            show();
        }
        cout<<ans<<endl;
    }
}