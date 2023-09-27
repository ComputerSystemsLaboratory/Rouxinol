#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <stack>
#include <functional>
#include <queue>
#include <cmath>

#define rep(i,j,k) for(int i=j;i<k;i++)
#define drep(n,m) for(int i=0;i<n;i++)for(int j=0;j<m;j++)
#define fi first
#define se second
#define vi vector<int>
#define INF 1000000000
#define MOD 1000000009
#define pb push_back
#define mp make_pair
typedef long long ll;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};

using namespace std;

ll gcd(ll a,ll b){
    if(a<b){
        int t=a;a=b;b=t;
    }
    int c=a%b;
    while(c!=0){
        a=b;
        b=c;
        c=a%b;
    }
    return b;
}

ll lcm(ll a,ll b){
    return a*b/gcd(a,b);
}

bool isPrime(int x){
    if(x==1)return false;
    if(x==2)return true;
    if(x%2==0)return false;
    for(int i=3;i<=sqrt(x);i+=2){
        if(x%i==0)return false;
    }
    return true;
}

int main() {
    string day[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    int t=3;
    int v[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int mo,da;
    while(cin>>mo>>da){
        if(mo==0&&da==0)break;
        rep(i,1,12+1){
            rep(j,1,v[i-1]+1){
                if(i==mo&&j==da){
                    cout<<day[t]<<endl;
                    goto AWAY;   
                }
                t++;
                if(t==7)t=0;
            }
        }
        AWAY:;
        t=3;
    }
    
  
    return 0;
}

