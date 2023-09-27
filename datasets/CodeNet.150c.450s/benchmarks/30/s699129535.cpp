#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int n;
const int MAX_N = 100;
int z[MAX_N];
int sw = 0;

int selectionSort(int a[], int n){
  for(int i = 0; i < n; i++){
    int minj = i;
    for(int j = i + 1; j < n; j++){
      if (a[minj] > a[j])
        minj = j;
    }
    swap(a[minj], a[i]);
    if (minj != i) sw++;
  }
  return sw;
}

int main(){
  cin >> n;
  for(int i = 0; i < n; i++) cin >> z[i];
  int ans = selectionSort(z, n);
  for(int i = 0; i < n; i++){
    if (i) printf(" ");
    printf("%d", z[i]);
  }
  puts("");
  printf("%d\n",ans);
}