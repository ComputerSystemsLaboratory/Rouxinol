#include<iostream>
#include<algorithm>

using namespace std;

void insertSort(int array[], int n);
void display(int array[],int n);

int main(){
  //subsitituting
  int n;
  cin >> n;
  int A[n];

  for(int i=0; i<n; i++){
    cin >> A[i];
  }
  display(A,n);
  insertSort(A,n);
}

void insertSort(int array[], int n){
  int i,j,k;
  for(i=1;i<n;i++){
    int a = array[i];
    for(j=0;j<i;j++){
      if(a<array[j]){
        for(k=i;k>j;k--){
            array[k] = array[k-1];
        }
        array[j] = a;
        break;
      }
    }
    display(array,n);
  }

}

void display(int array[],int n){
  for(int i=0; i<n ;i++){
    if(i>0) cout << " ";
    cout << array[i];
  }
  cout << endl;
}