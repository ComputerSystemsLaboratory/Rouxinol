#include <iostream>

using namespace std;

void output(int a[], int n){ 
  for(int i = 0; i < n; i++){
    cout << a[i];
    if(i != n-1){ cout << " "; }
  }
  cout << endl;
}

void insertionSort(int a[], int n){
  int v, j;
  
  for(int i = 1; i < n; i++){
    v = a[i];
    j = i - 1;
    while(j >= 0 && a[j] > v){
      a[j+1] = a[j];
      j--;
    }
    a[j+1] = v;
    output(a, n);
  }
}

int main(){
  int n, a[1000];

  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  output(a, n);
  insertionSort(a, n);

  return 0;
}

