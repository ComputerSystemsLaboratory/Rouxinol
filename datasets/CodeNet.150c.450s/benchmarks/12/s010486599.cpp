#include <iostream>
#include <cstdio>
#include <climits>
#include <cmath>
#include <algorithm>
#include <utility>
#include <vector>
#include <string>

using namespace std;

template<typename T>
class Heap
{
public:
  int H; // ??????????????§??????
  vector<T> A;
  Heap(int n)
  {
    H = n;
    A.resize(n+1);
    A[0] = 0;
  }
  ~Heap(){}
  T* operator[](int i)
  {
    return &A[i];
  }
  int parent(int i) {return i/2;}
  int left(int i) {return 2*i;}
  int right(int i) {return 2*i+1;}
  void printInfo(int i)
  {
    cout << "node " << i << ": key = " << A[i] << ", ";
    if(parent(i) >= 1) cout << "parent key = " << A[parent(i)] << ", ";
    if(left(i) <= H) cout << "left key = " << A[left(i)] << ", ";
    if(right(i) <= H) cout << "right key = " << A[right(i)] << ", ";
    cout << endl;
  }
};

int main()
{
  int H; cin >> H;
  Heap<int> T(H);
  for(int i = 1; i <= H; i++) cin >> *T[i];//scanf("%d", T[i]);
  for(int i = 1; i <= H; i++) T.printInfo(i);
  return 0;
}