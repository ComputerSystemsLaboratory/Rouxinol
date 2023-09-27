#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
ll N;
ll a[200001];
ll ans = 0;
ll temparr[200001];
void mergesort(ll left, ll right){
  if(right - left <= 1)
    return;
  ll mid = (left + right+1) / 2;
  mergesort(left, mid);
  mergesort(mid,right);
  ll id1 = left;
  ll id2 = mid;
  ll cnt = 0;
  for(ll i = left; i < right; i++){
    if(id1 == mid){
      temparr[i] = a[id2];
      id2++;
    }else if(id2 == right){
      temparr[i] = a[id1];
      id1++;
    }else{
      if(a[id1] < a[id2]){
	temparr[i] = a[id1];
	id1++;
      }else{
	temparr[i] = a[id2];
	cnt += (mid -  id1);
	id2++;
      }
    }
  }
  for(ll i = left; i < right; i++){
    a[i] = temparr[i];
  }

  //  cout << left << ' ' << right << ' ' << cnt << endl;
     
  ans += cnt;
}
int main(){
  cin >> N;
  for(ll i = 0; i < N; i++){
    cin >> a[i];
  }

  mergesort(0, N);

  cout << ans << endl;
}