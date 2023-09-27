//selectionSort

#include<iostream>

using namespace std;
static const int MAX = 100;

void selectionSort(int array[], int N){
  int i,j,min,tmp;
  int count = 0;
  for(i = 0 ; i < N ; i++){
    min = i;
    for(j = i + 1 ; j < N ; j++){
      if(array[j] < array[min]) min = j;
    }
    tmp = array[i];
    array[i] = array[min];
    array[min] = tmp;
    if(i != min) count++;
  }
  for(i = 0 ; i < N ; i++){
    if(i > 0) cout << " ";
    cout << array[i];
  }
  cout << endl;
  cout << count << endl;
}

int main(){
  int N,array[MAX];
  cin >> N;

  for(int i = 0 ; i < N ; i++) cin >> array[i];
  selectionSort(array,N);
}

