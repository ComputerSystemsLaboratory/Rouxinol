#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>

#include <functional>
#include <cassert>

typedef long long ll;
using namespace std;

#define mod 1000000007 //1e9+7
#define INF 1000000000 //1e9
#define LLINF 2000000000000000000LL //2e18
#define SIZE 1001


int main(){
  int n,m;
  string u,t;
  set<string> dic;

  scanf("%d",&n);

  for(int i=0;i<n;i++){
    cin >> u;
    dic.insert(u);
  }

  scanf("%d",&m);


  bool f = false;
  for(int i=0;i<m;i++){
    cin >> t;

    if(dic.find(t)==dic.end()){
      cout << "Unknown " << t << endl;
    }else{
      if(f==false){
	cout << "Opened by " << t << endl;
      }else{
	cout << "Closed by " << t << endl;
      }

      f = !f;
    }
  }    

  return 0;
}