#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <ctime>
#define INF 999999999
#define mod 1000000007

#define rep(i,n) for(int i=0;i<int(n);i++)
#define rrep(i,n) for(int i=(n);i>=0;i--)
#define REP(i,a,b) for(int i=(a);i<int(b);i++)
#define all(x) (x).begin(),x.end()
#define pb push_back
#define MOD(x) (x%(mod))
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int> pi;

bool debug=false;
/*---------------------------------------------------*/

int n,r,p,c;
int card[55];

void init(int n){
  rep(i,n)card[i]=n-i;
}

void shuffle(){
  int tmp[55];
  rep(i,r){
    cin>>p>>c;
    rep(i,c)tmp[i]=card[p+i-1];
    if(debug){cout<<"tmp ";rep(i,c)cout<<tmp[i]<<" ";cout<<endl;}
    for(int i=p-2;i>=0;i--)card[i+c]=card[i];
    rep(i,c)card[i]=tmp[i];
    if(debug){rep(i,n)cout<<card[i]<<" ";cout<<endl;}
  }
}

int main(){

  while(cin>>n>>r){
    if(n==0&&r==0)break;
    init(n);
    shuffle();
    cout<<card[0]<<endl;
  }
  
  return 0;
}