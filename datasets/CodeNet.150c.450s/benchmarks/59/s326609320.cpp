#include<iostream>
using namespace std;
void insertionSort(int a[], int n){
  for(int i = 0; i < n; i++){
    int v = a[i], j = i - 1;
    while(j >= 0 && a[j] > v){
      a[j+1] = a[j];
      j--;
    }
    a[j+1] = v;
    
    for(int k = 0; k < n; k++){
      if(k != n-1) cout << a[k] << " ";
      else         cout << a[k] << "\n";
    }
    
  }
}

int main(){
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  insertionSort(a,n);
  return 0;
}