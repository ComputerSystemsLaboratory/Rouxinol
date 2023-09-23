#include<iostream>
using namespace std;

int partition(int A[],int p,int r){ 
  int x = A[r];
  int i= p-1;
  for(int j=p;j<r;j++){
    if(A[j] <= x){
       i = i+1;
       swap(A[i],A[j]);
     }
  }
  swap(A[i+1],A[r]);
  return i+1;
}

int main(){
  int num=0;
  cin >> num;
  int array[num];
  for(int i=0;i<num;i++){
    cin >> array[i];
  }

  int index = partition(array,0,num-1);

  for(int i=0;i<num;i++){
    if(i==index)
       cout << "[" << array[i] << "]";
    else{
       cout << array[i];
    }
   if(i!=num-1){
     cout << " ";
    }
  }
cout << endl;
  return 0;
}