#include<bits/stdc++.h>
using namespace std;


int A[100000];
int n;


int partition(int p, int r){

  int work;
  int x = A[r];
  int tmp = p-1;

  for(int i=p; i<r; i++){
    if(A[i] <= x){
      tmp++;
      work = A[i];
      A[i] = A[tmp];
      A[tmp] = work;
    }
  }
      
  work = A[tmp+1];
  A[tmp+1] = A[r];
  A[r] = work;

  return tmp+1;

}


int main(){

  int q;

  cin >> n;
  for(int i=0; i<n; i++){
    cin >> A[i];
  }

  q = partition(0,n-1);

  cout << A[0];
  for(int i=1; i<n; i++){
    if(i==q){
      cout << ' '<<'[' << A[i] << ']';
    }
    else{
      cout << ' ' << A[i];
    }
  }
  cout << endl;

  return 0;
}