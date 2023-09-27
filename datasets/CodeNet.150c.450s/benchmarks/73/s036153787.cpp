#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

using namespace std;
// template for creating 2d vector
template<typename T>
vector<vector<T>> make_2d_vector(size_t rows, size_t cols, T init)
{ return vector< vector<T> >(rows, vector<T>(cols, init)); }


#define debug(x) cout << #x << "==" << x << endl;

const int inf = 100000000;

typedef long long ll;


template<typename T>
struct SqrtTree {

  vector<T> data;
  vector<T> bucket;
  T sq;

  SqrtTree( vector<T> const& v) : data(v) {
    int d_size = data.size();
    sq = sqrt( d_size );
    bucket.assign( (d_size + sq - 1) / sq, 0 );
    for(int i = 0; i < d_size; i++) {  bucket[i / sq] += data[i];  }
  }

  // [l, r]
  T query(int l, int r) {
    T res = 0;
    int i = l;
    while(i <= r) {
      if(i % sq == 0 && i + sq <= r) {
        // change here!
        res += bucket[ i / sq ];
        // res = min(res,  bucket[ i / sq ]); RMQ
        i += sq;
      } else {
        res += data[i];
        i++;
      }
    }
    return res;
  }

  void update(int i, T x) {
    // change here!
    // bucket[i / sq] -= data[i];
    data[i] += x;
    bucket[i / sq] += x;

    // RMQ
    // bucket[i / sq] = min(x, bucket[i / sq]);
    // data[i] = x;
  }

  void print() {

    for(int i = 0; i < (int)bucket.size(); i++ ) {
      cout << setw(2*sq) << bucket[i];
    }

    cout << "\n";

    for(int i = 0; i < (int)data.size(); i++ ) {
      cout << setw(2) << data[i];
    }

    cout << "\n";
  }

};



int main() {
  ios::sync_with_stdio(false);

  int N, Q;
  cin >> N >> Q;

  vector<int> data(N, 0);
  SqrtTree<int> sqtree(data);

  for(int i = 0; i < Q; i++) {
    int com, x, y;
    cin >> com >> x >> y;
    // add
    if(com == 0) {
      x--;                      // 0 index
      sqtree.update(x, y);
    }
    if(com == 1) {

      x--; y--;        // 0 index
      cout << sqtree.query(x, y) << "\n";
    }

  }

  return 0;
}