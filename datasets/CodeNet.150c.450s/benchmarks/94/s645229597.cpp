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

int BubbleSort(int a[],int n){
  int count=0;
  for(int i=0;i<n;i++){
    for(int j=n-1;j>i;j--){
      if(a[j]<a[j-1]){
        int temp=a[j];
        a[j]=a[j-1];
        a[j-1]=temp;
        count++;
      }
    }
  }
  return count;
}

int main(){
  int n;
  scanf("%d",&n);
  int num_list[n];
  for(int i=0;i<n;i++) scanf("%d",&num_list[i]);
  int count = BubbleSort(num_list,n);
  show_array(num_list,n);
  cout << count <<endl;
}