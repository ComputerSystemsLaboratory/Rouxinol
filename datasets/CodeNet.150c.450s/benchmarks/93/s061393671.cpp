#include <iostream>
#include <algorithm>
using namespace std;

struct Card{
  char a;
  int b;
};

bool compare_as_ints(Card x,Card y){
  return (x.b<y.b);
}

int partition(Card A[], int p, int r){
  Card x=A[r];
  int i=p-1;
  for(int j=p; j<r; j++){
    if(A[j].b <= x.b){
      i++;
      swap(A[i],A[j]);
    }
  }
  swap(A[i+1],A[r]);
  return i+1;
}

void quicksort(Card A[] ,int p ,int r){
  if(p<r){
    int q =partition(A,p,r);
    quicksort(A,p,q-1);
    quicksort(A,q+1,r);
  }
}

int main(){
  int n;
  cin >> n;

  Card A[100000],B[100000];
  for(int i=0; i<n; i++){
    cin >> A[i].a >> A[i].b;
    B[i]=A[i];
  }

  quicksort(A,0,n-1);
  stable_sort(B,B+n,compare_as_ints);

  bool f=0;
  for(int i=0; i<n; i++){
    if(A[i].a!=B[i].a){
      f=1;
    }
  }
  if(f==true){
    cout << "Not stable\n";
  }else{
    cout << "Stable\n";
  }

  for(int i=0; i<n; i++){
    cout << A[i].a << " " << A[i].b << endl;
  }

  return 0;
}

