#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

class segmentTree{
public:
  int size; //要素数
  int* seg; //実際に値を格納する配列(初期化の際は大きさをsize*2-1で)

  //コンストラクタ segの大きさに注意
  segmentTree(int n){
    size=1;
    while(size<n) size *= 2;
    seg = new int[size*2-1];

    for(int i=0; i<size*2-1; i++) seg[i]=0;
  }

  //k番目にaを加算
  void add(int k, int a){
    k += size-1;
    seg[k] += a;
    //木を登りながら更新
    while(k>0){
      k = (k-1)/2;
      seg[k] = seg[k*2+1] + seg[k*2+2];
    }
  }

  //クエリから求める和を計算する関数
  //[a, b)の和をを節点番号k, 区間[l, r)を指定して返す
  int getSum(int a, int b, int k, int l, int r){
    //もし指定した範囲が[a, b)の範囲外ならばINT_MAXを返しておく
    if(r <= a || b <= l) return 0;

    //[a, b)が[l, r)を完全に含むならば、その節点の値を返す
    if(a <= l && r <= b) return seg[k];

    else{
      int vl = getSum(a, b, k*2+1, l, (l+r)/2);
      int vr = getSum(a, b, k*2+2, (l+r)/2, r);
      return vl+vr;
    }
  }

  void print(){
    cout << "size: " << size << endl;
    for(int i=0; i<2*size-1; i++) cout << i << ": " << seg[i] << " ";
    cout << endl;
  }

  //デストラクタ
  ~segmentTree(){
    delete[] seg;
  }
};

int main(){
  int n, q; cin >> n >> q;
  segmentTree st(n+1);

  int ope, x, y;
  int ans[q]; int j=0;
  for(int i=0; i<q; i++){
    cin >> ope >> x >> y;
    if(ope==0) st.add(x-1, y);
    else ans[j++] = st.getSum(x-1, y, 0, 0, st.size);
  }

  for(int i=0; i<j; i++) cout << ans[i] << endl;

  return 0;
}

