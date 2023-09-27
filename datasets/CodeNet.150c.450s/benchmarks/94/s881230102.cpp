#include<iostream>
#include<algorithm>

using namespace std;

void display(int array[], int N);
int bubbleSort(int array[],int N);

int main(){
  int N;
  cin >> N;
  int A[N];
  for(int i=0;i<N;i++){
    cin >> A[i];
  }
  int n = bubbleSort(A,N);
  display(A,N);
  cout << n << endl;
  return 0;
}

int bubbleSort(int array[],int N){
  bool flag = true;
  int i = 0;
  while(flag){
    flag = false;
    for(int j=N-1;j>0;j--){
      if(array[j] < array[j-1]){
        int t = array[j];
        array[j] = array[j-1];
        array[j-1] = t;
        flag = true;
        i++;
      }
    }
  }
  return i;
}

void display(int array[], int N){
  for(int i=0;i<N;i++){
    if(i>0) cout << " ";
    cout << array[i];
  }
  cout << endl;
}