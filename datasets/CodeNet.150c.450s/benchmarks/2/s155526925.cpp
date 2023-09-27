#include <iostream>


using namespace std;

int partition(int *A ,int p ,int r){
  int x = A[r];
  int i = p-1;
  int tmp;
  for(int j=0;j<r;j++){
    if(A[j] <= x){
      i++;
      tmp = A[i];
      A[i] = A[j];
      A[j] = tmp;
    }
  }
  tmp = A[i+1];
  A[i+1] = A[r];
  A[r] = tmp;
  return i+1;
}

int main(){
  int n,q;
  int A[100000];

  while(1){
    cin >> n;
    if(cin.eof())
      break;
    char c = ' ';
    for(int i=0;i<n;i++){
      cin >> A[i];
    }
    q = partition(A,0,n-1);
    for(int i=0;i<n;i++){
      if(i == n-1)
        c = '\n';
      if(i == q)
        //printf("[%d]%c",A[i],c);
        cout << '[' << A[i] << ']' << c;
      else
        //printf("%d%c",A[i],c);
        cout << A[i] << c;
    }
  }
  return 0;
}

