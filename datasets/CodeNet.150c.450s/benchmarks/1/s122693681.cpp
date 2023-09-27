#include<iostream>
#include<vector>

using namespace std;

int bs(vector<int> arr, int x, int a, int b) {
  if(a == b) return a;
  else {
    int c = (a+b)/2;
    if(arr[c] < x && arr[c+1] >= x) return c+1;
    else if(arr[c] >= x) return bs(arr, x, a, c);
    else return bs(arr, x, c, b);
  }
}

int main() {
  int N, len, a_i;
  cin >> N;
  vector<int> arr(N), lis;
  for(int i = 0; i < N; i++) cin >> arr[i];
  lis.push_back(arr[0]);
  len = 1;
  for(int i = 1; i < N; i++) {
    if(lis[len-1] < arr[i]) {
      lis.push_back(arr[i]);
      len++;
    }
    else {
      lis[bs(lis, arr[i], 0, len-1)] = arr[i];
    }
  }
  cout << len << endl;
  return 0;
}