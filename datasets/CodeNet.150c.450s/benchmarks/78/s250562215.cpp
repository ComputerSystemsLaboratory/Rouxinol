#include <bits/stdc++.h>

using namespace std;

#define MAX 181
#define MAX_N 1100000
#define INF 1e9
int arr[MAX];
int dp1[MAX_N], dp2[MAX_N];

void make(){
  vector<int> odd;
  for(int i = 1 ; i < MAX ; i++){
    arr[i] = i*(i+1)*(i+2)/6;
    if(arr[i] % 2) odd.push_back(arr[i]);
  }

  for(int i = 0 ; i < MAX_N ; i++){
    dp1[i] = dp2[i] = INF;
  }
  dp1[0] = dp2[0] = 0;
  for(int i = 0 ; i < MAX ; i++){
    for(int j = 0 ; j < MAX_N ; j++){
      if(j + arr[i] >= MAX_N) continue;
      dp1[j+arr[i]] = min(dp1[j+arr[i]], dp1[j]+1);
    }
  }

  for(int i = 0 ; i < odd.size() ; i++){
    for(int j = 0 ; j < MAX_N ; j++){
      if(j + odd[i] >= MAX_N) continue;
      dp2[j+odd[i]] = min(dp2[j+odd[i]], dp2[j]+1);
    }
  }
}

int main(){
  int n;

  make();
  while(cin >> n ,n){
    cout << dp1[n] << " " << dp2[n] << endl;
  }

  return 0;
}