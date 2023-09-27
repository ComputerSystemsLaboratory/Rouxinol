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
      N--;
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

    void print(){
      cout << "debug print " << endl;
      for(int j = 1; j <= N; ++j){
        cout << " " << a[j];
      }cout << endl;
    }

  void mx(int i){
    int l = i*2;
    int r = i*2+1;
    int largest = INF;


    if(l <= N && a[l] > a[i]){
      largest = l;
    }else{
      largest = i;
    }

    if(r <= N && a[r] > a[largest])
        largest = r;

    if(largest != i){
      swap(a[i], a[largest]);
      mx(largest);
    }
  }

  void rmx(int i){
    int parent;
    int largest = INF;

    while(1){
      parent = i/2;
      if(parent < 1)
        break;

      if(a[parent] < a[i]){
        swap(a[parent], a[i]);
        i = parent;
        continue;
      }
      break;
    }
  }


  void buildMXHeap(){
//     cout << "build" << endl;
//       print();
    for(int i = N/2; i > 0; --i){
      mx(i);
    }
//       print();
  }

  void insert(int x){
    if( N+1 >= a.size())
      a.resize((N+1)*2, INF);

    N++;
    a[N] = x;
    rmx(N);
  }

  int extract(){
    int tmp = a[1];
    a[1] = a[N];
    a[N] = INF;
    N--;
    mx(1);
    return tmp;
  }
};




int main(void){
  int n, a;
  string str;
  Heap hp(1);

  while(1){
    cin >> str;
    if(str == "insert"){
      cin >> a;
//       cout << "INSERT" << endl;
      hp.insert(a);
    }else if(str == "extract"){
//       cout << "EXTRACT " << endl;
      cout << hp.extract() << endl;
    }else{
      break;
    }
//     cout << "end instruction " << endl;
//    hp.print();
  }

//   for(int i = 1; i < n; ++i){
//     cout << "node " << i << ": key = " << hp.a[i];
//     if(hp.get_parent(i) != INF){
//       cout << ", parent key = " << hp.get_parent(i);
//     }
//     if(hp.get_left(i) != INF){
//       cout << ", left key = " << hp.get_left(i);
//     }
//     if(hp.get_right(i) != INF){
//       cout << ", right key = " << hp.get_right(i);
//     }
//     cout << ", " << endl;
//   }

//   buildMXHeap(hp);
//   hp.print();
  return 0;
}