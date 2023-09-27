#include<cmath>
#include<cctype>
#include<cstdlib>
#include<cstdio>
#include<climits>
#include<iostream>
#include<algorithm>
#include<vector>
#include<deque>
#include<string>
#include<queue>
#include<map>
#include<set>
#include<utility>
#include<queue>

using namespace std;
int N,A,B,C,X;
int Y[100];
int nextRand(){
  int ret = X;
  X = ((A * X) + B)%C;
  return ret;
}

int solve(){
  int count = 0;
  for(int i = 0;i < N;i++){
    while(true){
      count++;
      if(count > 10001)return 0;
      int x = nextRand();
      if(x == Y[i]){
	break;
      }
    }
  }
  return count;
}

int main(){
  ios::sync_with_stdio(false);
  while((cin >> N >> A >> B >> C >> X) && N+A+B+C+X != 0){
    for(int i = 0;i < N;i++){
      cin >> Y[i];
    }
    cout << solve() -1 << endl;
  }
}