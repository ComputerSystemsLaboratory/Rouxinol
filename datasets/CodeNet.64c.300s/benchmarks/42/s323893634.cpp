#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<map>
#include<set>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>
#include<sstream>

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()

using namespace std;

typedef unsigned int uint;
typedef long long ll;

int main(){
  int n;
  while(cin>>n,n){
    bool b[21][21] = {{0}};
    int m;
    REP(i,n){
      int x,y; cin>>x>>y;
      b[y][x] = true;
    }
    int x,y;
    x = 10; y = 10;
    if(b[y][x]){
      b[y][x] = false;
      n--;
    }
    cin >> m;
    REP(i,m){
      char c;
      int  w;
      cin>>c>>w;
      REP(j,w){
        if(c == 'N'){
          y++;
        }else if(c == 'E'){
          x++;
        }else if(c == 'W'){
          x--;
        }else if(c == 'S'){
          y--;
        }
        if(b[y][x]){
          b[y][x] = false;
          n--;
        }
      }
    }
    if(n==0){
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
  }
  return 0;
}