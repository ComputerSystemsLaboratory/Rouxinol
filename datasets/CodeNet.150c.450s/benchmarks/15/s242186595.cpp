#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <string>

#define LEN 1000000
using namespace std;

int search(int A[], int n, int key){
  int i = 0;
  A[n] = key;
  while(A[i] != key) i++;
  return i != n;
}

int main(int argc, const char * argv[]) {
  int i, n, A[LEN], q, key, sum = 0;
  
  cin >> n;
  for(i=0; i < n; i++) cin >> A[i];
  
  cin >> q;
  
  for(i=0; i< q; i++){
    cin >> key;
    if(search(A, n, key)) sum++;
  }
  
  cout << sum << endl;
  
  return 0;
}

