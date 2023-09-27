#include <cstdio>
#include <vector>
using namespace std;
int tax(int tr, int p){
  int a;
  a = (100 + tr) * p / 100;
  return a;
}

int X, Y, S;

int solve(){
  int MAX = 0;
  for(int i = 1; i < S; i++){
    for(int j = i; j < S; j++){
      if(tax(X, i) + tax(X, j) == S)
	MAX = max(MAX, tax(Y, i) + tax(Y, j));
    }
  }
  return MAX;
}

int main(){
  while(scanf("%d %d %d", &X, &Y, &S) && X > 0){
    printf("%d\n", solve());
  }
}