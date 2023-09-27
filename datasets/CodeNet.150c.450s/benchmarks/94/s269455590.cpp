#include <iostream>
using namespace std;

int bubbleSort (int *ary, int size) {
  bool flag = true;
  int tmp;
  int count = 0;
  while (flag) {
    flag = false;
    for (int j=size-1; j>=1; j--) {
      if (ary[j] < ary[j-1]) {
	// swap ary[j] and ary[j-1];
	tmp = ary[j];
	ary[j] = ary[j-1];
	ary[j-1] = tmp;
	flag = true;
	count++;
      }
    }
  }
  return count;
}

int main (int argc, char **argv) {
  int N;
  cin >> N;

  int* d;
  d = new int[N];
  for (int i = 0;i<N;i++){
    cin >> d[i];
  }

  int n = bubbleSort(d, N);

  for (int i = 0;i<N;i++){
    cout << d[i];
    if (i+1==N) cout << endl;
    else cout << " ";
  }
  
  cout << n << endl;
  delete d;
}