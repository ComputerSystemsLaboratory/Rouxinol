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

void insertionsort(const int a[], int n){
  for(int i = 1; i < n; i++){
    int tmp = z[i];
    int j = i - 1;
    while (j >= 0 && z[j] > tmp){
      z[j + 1] = z[j];
      j--;
    }
    z[j + 1] = tmp;
    print_array(z);
  }
  
  return;
}

int main(){
  cin >> n;
  for(int i = 0; i < n; i++) cin >> z[i];
  print_array(z);
  insertionsort(z , n);
  
  return 0;
}