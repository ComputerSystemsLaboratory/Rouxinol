#include <iostream>
using namespace std;

int check(long long int p, int *w, int n, int k);
int solve(int n, int k, int *w);
int main(){
  int n, k;
  cin >> n >> k;
  int w[n];
  long long int sum=0;
  for(int i=0; i<n; i++) {
    cin >> w[i];
    sum += w[i];
  }


  cout << solve(n, k, w) << endl;
  return 0;
}

int check(long long int p, int *w, int n, int k){
  int i=0;
  for(int j=0; j<k; j++){
    long long int s=0;
    while(s+w[i]<=p){
      s += w[i];
      i++;
      if(i==n) return n;
    }
  }
  return i;
}

int solve(int n, int k, int *w){
  long long int left=0, right=1000000000, m;
  int v;
  while(right>left+1){
    m = (left+right)/2;
    v = check(m, w, n, k);
    if(v>=n) right=m;
    else left=m;
  }
  return right;
}

