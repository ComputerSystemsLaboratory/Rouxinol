#include <iostream>
#include <cstdio>
#include <climits>
#include <cmath>
#include <algorithm>
#include <utility>
#include <vector>
#include <string>

#define MAX 200000
#define INFTY 1<<30

using namespace std;

template<typename T>
class Heap
{
private:
  int parent(int i) {return i/2;}
  int left(int i) {return 2*i;}
  int right(int i) {return 2*i+1;}
  void maxHeapfy(int i)
  {
    int l, r, largest;
    l = left(i);
    r = right(i);

    if(l <= H && A[l] > A[i]) largest = l;
    else largest = i;
    if(r <= H && A[r] > A[largest]) largest = r;

    if(largest != i)
    {
      swap(A[i], A[largest]);
      maxHeapfy(largest);
    }
  }
  void increaseKey(int i, T key)
  {
    if(key < A[i]) return;
    A[i] = key;
    while(i>1 && A[parent(i)] < A[i])
    {
      swap(A[i], A[parent(i)]);
      i = parent(i);
    }
  }
public:
  int H; // ??????????????§??????
  vector<T> A;
  Heap(int n = 0)
  {
    H = n;
    A.resize(n+1);
  }
  ~Heap(){}
  T* operator[](int i)
  {
    return &A[i];
  }
  void buildMaxHeap(){for(int i = H/2; i >= 1; i--) maxHeapfy(i);}
  void printInfo(int i)
  {
    cout << "node " << i << ": key = " << A[i] << ", ";
    if(parent(i) >= 1) cout << "parent key = " << A[parent(i)] << ", ";
    if(left(i) <= H) cout << "left key = " << A[left(i)] << ", ";
    if(right(i) <= H) cout << "right key = " << A[right(i)] << ", ";
    cout << endl;
  }
  void insert(T key)
  {
    H++;
    A.resize(H+1);
    A[H] = -INFTY;
    increaseKey(H, key);
  }
  int extract()
  {
    T maxv;
    if(H < 1) return -INFTY;
    maxv = A[1];
    A[1] = A[H--];
    maxHeapfy(1);
    return maxv;
  }
};

int main()
{
  int x;
  string com;
  Heap<int> T;
  while(1)
  {
    cin >> com;
    if(com == "insert")
    {
      cin >> x;
      T.insert(x);
    }
    else if(com == "extract")
      cout << T.extract() << endl;
    else if(com == "end")
      break;
  }
  return 0;
}