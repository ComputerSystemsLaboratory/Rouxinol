#include <vector>
using namespace std;


const int Interval = 512;
struct SqrtDecomp{
  typedef long long Type;
  const int n;
  vector<Type> arr,buc;
  const Type ide;

  Type func(Type a,Type b){
    return a + b;
  }

  Type update_func(Type a,Type x){
    return a + x;
  }
SqrtDecomp(const vector<Type>& init,const Type& ide_) : n(init.size()),ide(ide_),arr(init),buc((int)init.size() / Interval + 10,ide_){ for(int i = 0;i < n;i++){ buc[i / Interval] = func(buc[i / Interval],arr[i]);
    }
  }

  Type get_inter(int l,int r){
    Type res = ide;
    while(l < r){
      if(l % Interval == 0 && l + Interval <= r){
        res = func(res , buc[l / Interval]);
        l += Interval;
      }
      else{
        res = func(res , arr[l]);
        l++;
      }
    }
    return res;
  }

  void update(int idx,const Type& x){
    arr[idx] = update_func(arr[idx] , x);
    buc[idx / Interval] = ide;
    int start = idx - idx % Interval;
    int end = min(start + Interval , (int)arr.size());
    for(int i = start;i < end;i++){
      buc[idx / Interval] = func(buc[idx / Interval],arr[i]);
    }
  }
};
#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
#define rep(i,s,e) for(int (i) = (s);(i) <= (e);(i)++)
#define all(x) x.begin(),x.end()
int main(){
  int n,q;
  cin >> n >> q;
  SqrtDecomp srd(vector<i64>(n,0),0);
  vector<i64> ans;
  for(int i = 0;i < q;i++){
    i64 com,x,y;
    cin >> com >> x >> y;
    x--;
    if(com == 0){
      srd.update(x,y);
    }
    else{
      ans.push_back(srd.get_inter(x,y));
    }
  }

  for(int i = 0;i < ans.size();i++){
    cout << ans[i] << endl;
  }
}

