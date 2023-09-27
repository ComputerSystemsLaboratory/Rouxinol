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

#define INF 999999999
#define mod 1000000007

#define rep(i,n) for(int i=0;i<int(n);i++)
#define REP(i,a,b) for(int i=(a);i<int(b);i++)
#define all(x) (x).begin(),x.end()
#define pb push_back
#define MOD(x) (x%(mod))
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int>pi;

/*---------------------------------------------------*/

int main(){
  int n;
  while(cin>>n){
    if(n==0)break;
    int mini=INF;
    for(int y=0;y*y<=n;y++){
      for(int z=0;z*z*z<=n;z++){
	int x=n-y*y-z*z*z;
	if(x<0)continue;
	//cout<<x<<" "<<y<<" "<<z<<endl;
	mini=min(mini,x+y+z);
      }
    }
    cout<<mini<<endl;
    
  }
  return 0;
}