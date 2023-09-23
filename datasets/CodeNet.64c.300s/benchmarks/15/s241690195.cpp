#include<iostream>
#include<algorithm>

using namespace std;

void display(int array[], int N);
int selectionSort(int array[],int N);

int main(){
  int N;
  cin >> N;
  int A[N];
  for(int i=0;i<N;i++){
    cin >> A[i];
  }
  int n  = selectionSort(A,N);
  display(A,N);
  cout << n << endl;
  return 0;
}

int selectionSort(int array[],int N){
  int n = 0;
  for(int i=0;i<N;i++){
    int min = 100;
    int index = i;
    for(int j=i;j<N;j++){
      if(array[j]<array[index]) index = j;
    }
    if(i != index){
      swap(array[i],array[index]);
      //display(array,N);
      n++;
    }
  }
return n;
}


void display(int array[], int N){
  for(int i=0;i<N;i++){
    if(i>0) cout << " ";
    cout << array[i];
  }
  cout << endl;
}