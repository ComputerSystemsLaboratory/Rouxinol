#include <cstdio>
#include <iostream>
using namespace std;

//??????????????????????????????
void show_array(int a[],int n){
  for(int i=0;i<n;i++){
    if(i>0) printf(" ");
    printf("%d",a[i]);
  }
  printf("\n");
}

void insertionSort(int a[],int n){
  for(int i=1;i<n;i++){
    int temp=a[i],j=i-1;
    while(j>=0 && a[j]>temp){
      a[j+1]=a[j];
      j--;
    }
    a[j+1]=temp;
    show_array(a,n);
  }
}

int main(){
  int n;
  scanf("%d",&n);
  int num_list[n];
  for(int i=0;i<n;i++){
    scanf("%d",&num_list[i]);
  }
  show_array(num_list,n);
  insertionSort(num_list,n);
  return 0;
}