#include<iostream>
#include<sstream>
#include<algorithm>
#include<numeric>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cassert>

#define rep(i,n) for(int i=0;i<n;i++)
#define all(c) (c).begin(),(c).end()
#define fr(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define mp make_pair
#define pb push_back
#define dbg(x) cerr<<#x<<" = "<<(x)<<endl

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

const int inf=1<<28;
const double INF=1e12,EPS=1e-9;

int main()
{
  stack<int> S;
  int n;
  while(cin>>n){
    if(n==0){
      cout<<S.top()<<endl;
      S.pop();
    }else S.push(n);
  }
  return 0;
}