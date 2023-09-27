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

#define rep(i,j,k) for(int i=j;i<k;i++)
#define Sort(x) sort((x).begin(),(x).end())
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define vi vector<int>
#define INF 1000000000
#define MOD 1000000007
#define pb push_back
#define MP make_pair
typedef long long ll;
typedef std::pair<int,int> pii;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};

using namespace std;

int main() {
    int n;cin>>n;
    vector<vector<char>> v={{},{'.',',','!','?',' '},{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};
    bool f=false;
    rep(j,0,n){
        string s;
        cin>>s;
        int x,t=-1;
        rep(i,0,s.length()){
            if(!f){
                f=true;
                x=s[i]-'0';
            }
            
            if(s[i]!='0'){
                t++;
                if(x==9||x==7){
                    if(t==4)t=0;
                }else if(x==1){
                    if(t==5)t=0;
                }else{
                    if(t==3)t=0;
                }
            }else {
                if(t!=-1)cout<<v[x][t];
                f=false;
                t=-1;
            }
        }
        cout<<endl;
    }
    return 0;
}

