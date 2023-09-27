#include<iostream>
using namespace std;

void print(int *a,int size){
  for(int i=0;i<size-1;i++){
    cout<<a[i]<<" ";
  }
  cout<<a[size-1]<<endl;
}

int main(){
  int n;
  cin>>n;
  int *array = new int[n];
  for(int i=0;i<n;i++){
    cin>>array[i];
  }
  print(array,n);
  for(int i=1;i<n;i++){
    int v=array[i];
    int j=i-1;
    while(j>=0 && array[j] > v){
      array[j+1]=array[j];
      j--;
    }
    array[j+1]=v;
    print(array,n);
  }

  delete []array; 
  return 0;
}