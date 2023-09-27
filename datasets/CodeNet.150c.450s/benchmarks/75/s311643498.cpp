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
      for(int j = 1; j <= N; ++j){
        cout << " " << a[j];
      }cout << endl;
    }

//     void mx(int i){
//       int l = get_left(i);
//       int r = get_right(i);
//       int largest = -1;
//
//       if(l <= N && a[l] > a[i]){
//         largest = l;
//       }else{
//         largest = i;
//       }
//
//       if(r <= N && a[r] > a[largest])
//           largest = r;
//
//       if(largest != i){
//         swap(a[i], a[largest]);
//         mx(largest);
//       }
//     }
//
//     void buildMXHeap(){
//       for(int i = N/2; i > 0; --i){
//         mx(i);
//       }
//     }
};

void mx(Heap &A, int i){
  int l = i*2;
  int r = i*2+1;
  int largest = INF;


  if(l <= A.N && A.a[l] > A.a[i]){
    largest = l;
  }else{
    largest = i;
  }

  if(r <= A.N && A.a[r] > A.a[largest])
      largest = r;

  if(largest != i){
    swap(A.a[i], A.a[largest]);
    mx(A, largest);
  }
}

void buildMXHeap(Heap &A){
  for(int i = A.N/2; i > 0; --i){
    mx(A, i);
  }
}



int main(void){
  int n, a;
  cin >> n;
  n++;
  Heap hp(n);

  for(int i = 1; i < n; i++){
    cin >> a;
    hp.a[i] = a;
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

  buildMXHeap(hp);
  hp.print();
}