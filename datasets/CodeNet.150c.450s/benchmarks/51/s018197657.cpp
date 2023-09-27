#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>

using namespace std;

typedef long long ll;
#define REP(i,b,n) for(int i=b;i<n;i++)
#define rep(i,n) REP(i,0,n)

bool attend[40];
void solve(){

}
int main(){
  fill(attend, attend+31,false);
  for(int i=0;i<28;i++){
    int x;
    cin >> x;
    attend[x]=true;
  }
  for(int i=1;i<31;i++){
    if(!attend[i]){
      cout << i <<endl;
    }
  }
    
  return 0;
}