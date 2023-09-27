#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
const int INF = 2100000000;

class Heap{
  public:
    vector<int> a;
    int N;
    Heap(int n){
      N = n;
      a.resize(N, INF);
    }

    int get_parent(int x){
      return a[(x)/2];
    }

    int get_left(int x){
      if(x*2 < N){
        return a[x*2];
      }
      return INF;
    }

    int get_right(int x){
      if(x*2+1 < N){
        return a[x*2+1];
      }return INF;
    }
};


int main(void){
  int n, a;
  cin >> n;
  n++;
  Heap hp(n);

  for(int i = 1; i < n; i++){
    cin >> a;
    hp.a[i] = a;
  }
  for(int i = 1; i < n; ++i){
    cout << "node " << i << ": key = " << hp.a[i];
    if(hp.get_parent(i) != INF){
      cout << ", parent key = " << hp.get_parent(i);
    }
    if(hp.get_left(i) != INF){
      cout << ", left key = " << hp.get_left(i);
    }
    if(hp.get_right(i) != INF){
      cout << ", right key = " << hp.get_right(i);
    }
    cout << ", " << endl;
  }
}