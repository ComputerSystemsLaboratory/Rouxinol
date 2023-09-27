#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> v) {
  for (vector<int>::iterator itr = v.begin();
       itr != v.end(); itr++) {
    if (itr != v.begin()) {
      cout << ' ';
    }
    cout << *itr;
  }
  cout << endl;
}

int main(int argc, char* argv[]) {
  int N; cin >> N;
  vector<int> arr;
  for (int i = 0; i < N; i++) {
    int n; cin >> n;
    arr.push_back(n);
  }
  
  print(arr);

  for (int i = 1; i < N; i++) {
    int key = arr[i];
    int j;
    for (j = i-1; 0 <= j && arr[j] > key; j--) {
      arr[j+1] = arr[j];
    }
    arr[j+1] = key;
    print(arr);
  }
  return 0;
}