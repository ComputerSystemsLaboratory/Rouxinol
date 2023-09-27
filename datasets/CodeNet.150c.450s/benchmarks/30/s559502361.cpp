#include <iostream>
using namespace std;

int SelectionSort(int a[], int n){
  int count = 0;

  for(int i=0; i<n; i++){
    int minj=i;
    for(int j=i; j<n; j++){
      if(a[j]<a[minj]) minj = j;
    }
    if(i!=minj){
        swap(a[i], a[minj]);
        count++;
    }
  }
  return count;
}

int main(void){
  int n;
  cin >> n;
  int a[n];
  for (int i=0; i<n; i++){
    cin >> a[i];
  }
  int count = SelectionSort(a, n);
  for(int i=0; i<n; i++){
    if(i) cout << " ";
    cout << a[i];
  }
  cout << endl;
  cout << count << endl;
  return 0;
}

