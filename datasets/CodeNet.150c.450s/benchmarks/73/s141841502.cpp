#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rrep(i, n) for (int i = (n - 1); i >= 0; i--)
#define ALL(v) v.begin(), v.end()
#define SEG_LEN (1 << 18)
using namespace std;
using P = pair<int, int>;
typedef long long ll;
int seg[2 * SEG_LEN];


//RSQ
void add(int index, int x){
  index += SEG_LEN;
  seg[index] += x;
  while(true){ 
    index /= 2;
    if(index==0)break;
    seg[index] = seg[2*index] + seg[2 * index + 1];
  }
}

int sum(int l, int r){
  l += SEG_LEN;
  r += SEG_LEN;
  int ans = 0;
  while(l < r){ 
    if(l %2 == 1){ 
      ans += seg[l];
      l++;
    }
    l /= 2;
    if(r % 2 == 1){ 
      ans += seg[r-1];
      r--;
    }
    r /= 2;
  }
  return ans;
}


int main() {
  int n, q, com, index, x, l, r;
  cin >> n >> q;
  rep(i,q){
    cin >> com;
    if(com == 0){ 
      cin >> index >> x;
      add(index, x);
    }else{ 
      cin >> l >> r;
      cout << sum(l, r+1) << endl;
    }
  }

}
