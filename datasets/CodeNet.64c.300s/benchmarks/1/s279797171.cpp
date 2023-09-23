#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

#define PB push_back

int partition(int*,int,int);

int main(int argc,char* arg[]){
  int n;
  int arr[100000];

  cin>>n;
  for(int i=0;i<n;i++)
    cin>>arr[i];

  int key=partition(arr,0,n-1);

  for(int i=0;i<n;i++){
    if(i==key) printf("[");
    printf("%d",arr[i]);
    if(i==key) printf("]");
    if(i!=n-1) printf(" ");
  }
  puts("");
  return 0;
}

int partition(int *arr,int p,int r){
  int x=arr[r],j;
  int i=p-1;
  for(j=p;j<r;j++){
    if(arr[j]<=x){
      i+=1;
      swap(arr[i],arr[j]);
    }
  }
  swap(arr[i+1],arr[j]);
  return i+1;
}