#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>

#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)

using namespace std;

typedef    long long          ll;
typedef    unsigned long long ull;
typedef    vector<bool>       vb;
typedef    vector<int>        vi;
typedef    vector<vb>         vvb;
typedef    vector<vi>         vvi;
typedef    pair<int,int>      pii;

const int INF=1<<29;
const double EPS=1e-9;

const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};
int n,m,p;
int main(){
  int x;
  while(cin>>n>>m>>p,n||m||p){
    map<int,int> ma;
    int sum = 0;
    for(int i = 1;i <=n;i++){
      cin>>x;
      ma[i]+=x;
      sum +=x*100;
    }
    sum -=(sum*p)/100;
    if(ma[m]==0)
      sum = 0;
    else{
      sum /=ma[m];
    }
    cout <<sum<<endl;
  }
  return 0;
}