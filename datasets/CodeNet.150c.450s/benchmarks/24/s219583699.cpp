#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<map>
#include<set>
#define F first
#define S second
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 1<<28
#define all(n) n.begin(),n.end()
using namespace std;
typedef pair<int,int> P;
typedef long long ll;

bool cmp_n(const P &pp,const P &qq){
  if(pp.S != qq.S)return pp.S < qq.S;
  return pp.F < qq.F;
}

int main(){
  int N,M;
  while(true){
    cin >> N >> M;
    if(N+M == 0)break;
    vector<P> vec;
    vec.clear();
    ll total = 0;
    rep(i,N)
      {
	int a,b;
	cin >> a >> b;
	total += a;
	vec.push_back(P(a,b));
      }
    sort(vec.begin(),vec.end(),cmp_n);
    if(0 >= total-M){
      cout << 0 << endl;
      continue;
    }

   

    
    
    ll sam = 0;
    ll dif = total - M;

    int index = 0;
    while(true){
      if(dif <= 0)break;
      sam += vec[index].S;
      //cout << "sum! " << vec[index].S << endl;
      dif--,vec[index].F--; 
      if(vec[index].F == 0)index++;
    }
   
    cout << sam << endl;
  }
  return 0;
}