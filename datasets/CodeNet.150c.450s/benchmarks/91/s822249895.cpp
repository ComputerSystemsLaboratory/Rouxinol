#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <cctype>
#include <cmath>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <math.h>
#include <bitset>
#include <iterator>
#include <iomanip>
#include <sstream>
#include <numeric>
#define INF 2000000000
using namespace std;
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
long long gcd(long long a,long long b){if(a%b==0){return b;}else return gcd(b,a%b);}
long long lcm(long long a,long long b){if(a==0){return b;} return a/gcd(a,b)*b;}
long long MOD; template<class T> void mod(T &n){MOD=n;}
#define sym cout<<"---------"<<endl;
#define ll long long
#define PL pair<long long, long long>
#define P pair<int,int>
#define mk make_pair
#define en endl
#define WHITE 1
#define BLACK 2
#define GRAY 1
#define RE return 0
#define int ll

bool prime[1000005]={true};

signed main(){
  int n;
  while(cin>>n){
    if(n==1){cout<<0<<en; continue;}
    for(int i=2; i<=n; i++) prime[i]=true;
    int ans=0;
    for(int i=2; i<=n; i++){
      if(prime[i]) {
        ans++;
        for(int j=2*i; j<=n; j+=i) prime[j]=false;
      }
    }
    cout<<ans<<en;
  }
}



