//bubble sin_port
#include<iostream>

using namespace std;
static const int MAX = 100;

void bubbleSort(int array[],int N){
  int i,j,tmp;
  int count = 0;
  for(i = 1 ; i < N ; i++)
  for(j = N-1 ; j >= i ; j--){
    if(array[j] < array[j-1]){
      tmp = array[j];
      array[j] = array[j-1];
      array[j-1] = tmp;
      count++;
    }
  }
  for(i = 0 ; i < N ; i++){
    if(i > 0) cout << " ";
    cout << array[i];
  }
  cout << endl;
  cout << count << endl;
}

int main(){
  int array[MAX],N;

  cin >> N;

  for(int i = 0 ; i < N ; i++) cin >> array[i];

  bubbleSort(array,N);
}

