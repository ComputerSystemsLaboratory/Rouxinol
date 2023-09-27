#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e5+10;
int64_t cnt[MAX];

int main(){
  int N;
  cin >> N;
  for(int i=0; i<N; i++){
    int x;
    cin >> x;
    cnt[x]++;
  }
  
  int Q;
  cin >> Q;
  
  int64_t sum = 0;
  for(int i=0; i<MAX; i++){
    sum += cnt[i]*i;
  }
  
  for(int i=0; i<Q; i++){
    int b, c;
    cin >> b >> c;
    sum -= cnt[b]*b;
    sum -= cnt[c]*c;
    cnt[c] += cnt[b];
    cnt[b] = 0;
    sum += cnt[c]*c;
    cout << sum << endl;
  }
  
}