#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int n;
const int MAX_N = 100;
int z[MAX_N];

void print_array(const int a[]){
  for(int i = 0; i < n; i++){
    printf("%d",a[i]);
    if(i != n - 1) printf(" ");
  }
  printf("\n");
}

int bubblesort(int a[], int n){
  int sw = 0;
  bool flag = true;
  for(int i = 0; flag; i++){
    flag = false;
    for(int j = n - 1; j >= i + 1; j--){
      if(a[j] < a[j-1]){
        swap(a[j-1],a[j]);
        flag = true;
        sw++;
      }
    }
  }
  return sw;
}

int main(){
  cin >> n;
  for(int i = 0; i < n; i++) cin >> z[i];
  int ans = bubblesort(z, n);
  print_array(z);
  printf("%d\n", ans);
  
  return 0;
}