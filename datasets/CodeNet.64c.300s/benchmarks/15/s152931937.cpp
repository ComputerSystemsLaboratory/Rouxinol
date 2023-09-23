#include <iostream>
#include <algorithm>
#include <stdio.h>
static const int MAX = 200000;

using namespace std;

void trace(int a[], int n){
  for(int i = 0; i < n; i++){
    if(i) cout << " ";
    cout << a[i];
  }
  cout << endl;
}

int sort(int a[], int n){
  int sw = 0;
  for(int i=0; i < n; i++){
    int mini = i;
    for(int j=i+1; j < n; j++){
      if(a[mini] > a[j]){
        mini = j;
      }
    }
    if(mini != i){
      swap(a[mini], a[i]);
      sw++;
    }
  }
  
  return sw;
}

int main(int argc, const char * argv[]) {
  int n, a[MAX], sw;
  cin >> n;
  for(int i = 0; i < n; i++) cin >> a[i];
  sw = sort(a, n);
  trace(a, n);
  cout << sw << endl;
  return 0;
}
