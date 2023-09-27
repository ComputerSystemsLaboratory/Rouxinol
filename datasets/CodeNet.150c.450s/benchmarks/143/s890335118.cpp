#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  long long sum = 0;
  vector<int> v(100001);
  for(int i = 0; i < N; i++){
    int a;
    cin >> a;
    v[a] += 1;
    sum += a;
  }
  int Q;
  cin >> Q;
  vector<long long> sums(Q);
  for(int i = 0; i < Q; i++){
    int b,c;
    cin >> b >> c;
    v[c] += v[b];
    sum += v[b]*(c-b);
    v[b] = 0;
    sums[i] = sum;
  }
  for(int i = 0; i < Q; i++) cout << sums[i] << endl;
}
