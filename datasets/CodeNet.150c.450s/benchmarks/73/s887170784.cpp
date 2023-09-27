#include <iostream>
using namespace std;

#define MAX 100000
int num[MAX];

void add(int i, int x){
  num[i] += x;
}

void getSum(int s, int t){
  int sum=0;
  for(int i=s; i<=t; i++){
    sum += num[i];
  } cout << sum << endl;
}

int main(){
  int n, q;
  cin >> n >> q;
  int com[q], x[q], y[q];
  for(int i=1; i<=n; i++){ num[i] = 0; }

  for(int i=1; i<=q; i++){ cin >> com[i] >> x[i] >> y[i]; }

  for(int i=1; i<=q; i++){
    if(com[i]==0){ add(x[i], y[i]); }
    else if(com[i]==1){ getSum(x[i], y[i]); }
  }

  return 0;
}
