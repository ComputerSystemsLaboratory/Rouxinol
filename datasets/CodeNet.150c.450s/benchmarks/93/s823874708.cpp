#include <iostream>
using namespace std;
#define len 100001
#define INFTY 10000000

struct Card{
  char picture;
  int num;
};

int partition(Card A[],int p,int r){
  
  int x = A[r].num;
  int i = p-1;
  for(int j = p; j < r; ++j){
    if(A[j].num <= x){
      ++i;
      swap(A[i],A[j]);
    }
  }
  swap(A[i+1],A[r]);
  return i+1;
}

void quicksort(Card A[],int p,int r){
  if(p < r){
    int q = partition(A,p,r);
    quicksort(A,p,q-1);
    quicksort(A,q+1,r);
  }
}

void merge(Card A[],int left,int mid,int right){
  int n1 = mid - left;
  int n2 = right - mid;
  Card L[n1],R[n2];
  for(int i=0; i < n1; ++i)   L[i] = A[left + i];
  for(int i=0; i < n2; ++i)   R[i] = A[mid + i];
  L[n1].num = INFTY;
  R[n2].num = INFTY;
  int i = 0, j = 0;
  for(int k = left; k < right; ++k){
    if( L[i].num <= R[j].num ){
      A[k] = L[i++];
    }
    else{ 
      A[k] = R[j++];
    }
  }

}

void mergesort(Card A[],int left,int right){
  if(left+1 < right){
    int mid = (left + right)/2;
    mergesort(A,left,mid);
    mergesort(A,mid,right);
    merge(A,left,mid,right);
  }
}

bool isStable(Card A[],Card B[],int n){
  for(int i=0; i<n; ++i)
    if(A[i].picture != B[i].picture)
      return false;
  return true;
}

int main(){
  int n;
  Card A[len],B[len];
  cin >> n;
  for(int i=0; i<n; ++i){
    cin >> A[i].picture >> A[i].num;
    B[i].picture = A[i].picture;
    B[i].num = A[i].num;
  }
  quicksort(A,0,n-1);
  mergesort(B,0,n);

  if(isStable(A,B,n))
    cout << "Stable";
  else
    cout << "Not stable";
  cout << endl;

  for(int i=0; i<n; ++i) cout << A[i].picture << " " << A[i].num << endl;
  

  return 0;
}

