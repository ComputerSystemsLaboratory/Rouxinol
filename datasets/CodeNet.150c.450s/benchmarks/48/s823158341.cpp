#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<stdexcept>
#include<cmath>
#include<fstream>
#include<memory>
#include<algorithm>
#include<cstring>
#include<ctime>
#include<deque>
#include<sstream>
#include<iomanip>
#include<sstream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<climits>
#include<map>
#include<set>
#include<list>
#include<cassert>
#include<deque>
#define REP(i,s,n) for(int i=s;i<n;i++)
#define rep(i,n) REP(i,0,n)
#define INF 1<<27
#define all(n) n.begin(),n.end()
#define insert(a,b,c,d) PP(P(a,b),P(c,d))
#define F first
#define iter(c) __typeof__((c).begin())
#define foreach(i,c) for(iter(c) i=(c).begin();i!=(c).end();++i)
#define S second
#define pb push_back
#define pf push_front
#define LIM 100000
using namespace std;
typedef pair<int,int> P;
typedef pair<P,P> PP;
typedef long long ll;
typedef unsigned long long ull;

int main(){

  int e;
  while(true){
    cin >> e;
    if(!e)break;
    int x,y,z,mine;
    mine = INF;
    for(int i=0;i<=sqrt(e)+1;i++){
      for(int j=0;j<=100;j++){
	if(pow((double)j,3) > e)break;
	y = pow((double)i,2);
	if(y > e)break;
	z = pow((double)j,3);
	if(y+z > e)break;
	x = e - (y+z);
	if(x+i+j < mine)mine = x+i+j;
      }
    }

    cout << mine << endl;
  }
return 0;
}