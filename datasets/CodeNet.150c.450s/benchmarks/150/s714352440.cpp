#include <iostream>
#include <cstdlib>

using namespace std;

void printarray(int n, int a[]){
  for (int i=0; i<n; i++){
    cout << a[i] << " ";
  }
  cout << endl;
}

void CountingSort(int n, int a[], int b[]){
  int m = -1;
  for (int i=0; i<n; i++){
    m = max(a[i], m);
  }
  int c[m+1];
  for (int i=0; i<=m; i++){
    c[i] = 0;
  }
  for (int i=0; i<n; i++){
    c[a[i]]++;
  }

  int i = 0;
  int j = 0;
  while (j<n){
    for (int k=j; k<j+c[i]; k++){
      b[k] = i;
    }
    j += c[i];
    i++;
  }
}

int main(){
  int n;
  cin >> n;
  int a[n];
  int b[n];
  int tmp;
  for (int i=0; i<n; i++){
    cin >> tmp;
    a[i] = tmp;
  }

  CountingSort(n,a,b);

  for (int i=0; i<n; i++){
    if (i==0){
      cout << b[i];
    }
    else{
      cout << " " << b[i];
    }
  }
  cout << endl;

  return 0;
}

