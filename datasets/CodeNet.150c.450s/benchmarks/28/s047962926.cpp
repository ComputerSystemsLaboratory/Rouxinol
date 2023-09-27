#include<iostream>
#include<algorithm>

using namespace std;

int n, k, w[100000];

bool check(int p){
  int cnt = 1;
  long long total = 0;

  for(int i = 0;i < n;i++){
    if(w[i] > p) return false;
    if(total + w[i] <= p) total += w[i];
    else{
      cnt++;
      total = w[i];
    }
  }

  if(cnt <= k) return true;
  else return false;
}

int main(){
  long long left = 0, right = 100000 * 10000;

  cin >> n >> k;
  for(int i = 0;i < n;i++){
    cin >> w[i];
    left = max(left, (long long)w[i]);
  }

  while(left < right){
    int mid = (left + right) / 2;

    if(check(mid)) right = mid;
    else left = mid + 1;
  }

  cout << left << endl;

  return 0;
}

