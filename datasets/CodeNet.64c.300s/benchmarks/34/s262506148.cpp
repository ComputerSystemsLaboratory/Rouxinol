#include<iostream>
#include<algorithm>

using namespace std;
static const int MAX = 100;

void printArray(int array[],int N){
  for(int i = 0 ; i < N; i++){
    if(i > 0) cout << " ";
    cout << array[i];
  }
  cout << endl;
  return;
}

void insertionSort(int array[], int N){
  int i,j,tmp;
  for(i = 1 ; i < N ; i++){
    tmp = array[i];
    j = i - 1;
    while(j >= 0 && array[j] > tmp){
      array[j+1] = array[j];
      j--;
    }
    array[j+1] = tmp;
    printArray(array,N);
  }
  return;
}

int main(){
  int array[MAX],N;

  cin >> N;
  for(int i = 0 ; i < N ; i++) cin >> array[i];
  printArray(array,N);
  insertionSort(array,N);
}

