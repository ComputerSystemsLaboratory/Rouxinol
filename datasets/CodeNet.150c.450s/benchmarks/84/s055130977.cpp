#include <iostream>

using namespace std;

typedef long long ll;

#define rep(i,n) REP(i,0,n)
#define REP(i,a,n) for(int i = a ; i < (int)n ; i++)
#define INF 2000000000
#define int ll

ll n;
ll input[200001];
ll l[100002];
ll r[100002];

ll merge(int left, int right, int mid){
  rep(i, mid - left) l[i] = input[left + i];
  rep(i, right - mid) r[i] = input[mid + i];
  
  // 番兵
  l[mid -left] = r[right - mid] = INF;
  int l_idx, r_idx;
  ll cnt;
  l_idx = r_idx = 0;
  cnt = 0;
  REP(i, left, right){
    if(l[l_idx] <= r[r_idx]){
      input[i] = l[l_idx];
      l_idx++;
    }else{
      input[i] = r[r_idx];
      r_idx++;
      cnt += ((mid - left) - l_idx);
    }
  }
  return cnt;
}

ll mergeSort(int left, int right){
  if(right - left > 1){
    int mid = (right + left)/2;
    ll ret = mergeSort(left, mid);
    ret += mergeSort(mid, right);
    return (ret + merge(left, right, mid));
  }else{
    return 0;
  }
}

signed main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  
  cin >> n;
  rep(i, n){
    cin >> input[i];
  }

  cout << mergeSort(0, n) << endl;
}
