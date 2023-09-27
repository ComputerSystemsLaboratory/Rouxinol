#include <iostream>
#include <cstdlib>

using namespace std;

void printarray(int n, int q, int a[]){
  for (int i=0; i<n; i++){
    if (i==q){
      cout << '[' << a[i] << ']';
    }
    else{
      cout << a[i];
    }

    if (i!=n-1){
      cout << ' ';
    }
  }
  cout << endl;
}

void swap(int a[], int i, int j){
  int tmp;
  tmp = a[i];
  a[i] = a[j];
  a[j] = tmp;
}

int partition(int a[], int p, int r){
  int x;
  x = a[r];
  int i;
  i = p-1;
  for (int j=p; j<r; j++){
    if (a[j] <= x){
      i = i+1;
      swap(a,i,j);
    }
  }
  swap(a,i+1,r);
  return i+1;
}

int main(){
  int n;
  cin >> n;
  int a[n];
  int tmp;
  for (int i=0; i<n; i++){
    cin >> tmp;
    a[i] = tmp;
  }

  int ans;
  ans = partition(a,0,n-1);

  printarray(n,ans,a);

  return 0;
}

