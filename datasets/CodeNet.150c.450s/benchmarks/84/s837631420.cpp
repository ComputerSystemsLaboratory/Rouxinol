#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

class BIT{
public:
  int size;
  int* bit;

  BIT(int _size = 0){
    size = _size;
    bit = new int[size];
    for(int i = 0; i < size; i++) bit[i] = 0;
  }

  ~BIT(){delete[] bit;}

  /*
    En: returns sum of [from bit[0] to bit[i]].
    Ja: bit[0]からbit[i]までの合計をかえす。
   */
  int sum(int i){
    int s = 0;
    while(i > 0){
      s += bit[i];
      i -= i&-i;
    }
    return s;
  }

  /*
    En: add x at bit[i].
    Ja: bit[i]にxを加える。
   */
  void add(int i, int x){
    while(i<size){
      bit[i] += x;
      i += i&-i;
    }
  }
};

vector<int> make(const vector<int> v){
  vector<int> tmp = v;
  sort(tmp.begin(), tmp.end());

  int cnt = 1;
  map<int,int> M;
  for(int i = 0; i < (int)tmp.size(); i++){
    if(M.count(tmp[i])) continue;
    M[tmp[i]] = cnt++;
  }

  vector<int> vec(v.size());
  for(int i = 0; i < (int)v.size(); i++) vec[i] = M[v[i]];
  return vec;
}

int main(){

  int n;
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++) cin >> v[i];
  v = make(v);
  BIT bit(n+1);
  long long ans = 0;
  for(int i = 0; i < n; i++){
    ans += i - bit.sum(v[i]);
    bit.add(v[i],1);
  }
  cout << ans << endl;
  return 0;
}