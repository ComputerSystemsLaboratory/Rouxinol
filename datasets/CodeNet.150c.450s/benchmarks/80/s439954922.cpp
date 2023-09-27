#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <functional>

using namespace std;

#define rep(i,n) for((i)=0;(i)<(int)(n);(i)++)
#define foreach(itr,c) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)

int main(){
  int A=0,B=0,i;

  rep(i,4){
    int t;
    scanf("%d",&t);
    A += t;
  }
  rep(i,4){
    int t;
    scanf("%d",&t);
    B += t;
  }

  cout << max(A,B) << endl;

  return 0;
}