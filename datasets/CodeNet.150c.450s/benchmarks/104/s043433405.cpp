#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  int w, n;
  vector<int> que;
  cin >> w >> n;
  for(int i = 1;i <= w;i++) que.push_back(i);
  for(int i = 0;i < n;i++){
    int a, b;
    scanf("%d,%d", &a, &b);
    swap(que[a-1], que[b-1]);
  }

for(int i = 0;i < w;i++){
  cout << que[i] << "\n";
}
  return 0;
}

