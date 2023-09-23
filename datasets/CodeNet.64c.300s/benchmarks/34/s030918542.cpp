#include<stdio.h>
//include<algorithm>
//using namespace std;

void trace(int a[], int n){
  int i;
  for( i = 0; i < n; i++ ){
    if ( i > 0 ) printf(" ");
    printf("%d", a[i]);
  }
  printf("\n");
}

void insertionSort(int a[], int n){
  int j, i, v;
  for(int i = 1; i < n; i++){
    v = a[i];
    for(j = i - 1; j >= 0 && a[j] > v; j = j - 1){
      a[j+1] = a[j];
    }
    a[j+1] = v;
    trace(a, n);
  }
}

int main(){
  int n, i, j;
  int a[100];
  
  scanf("%d", &n);
  for( i = 0; i < n; i++) scanf("%d", &a[i]);
  
  trace(a, n);
  insertionSort(a, n);
  return 0;
}