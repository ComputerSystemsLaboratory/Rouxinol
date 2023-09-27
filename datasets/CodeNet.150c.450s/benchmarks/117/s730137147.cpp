#include<iostream>
using namespace std;

const int INFTY = 1000000001;

int C=0;

void Merge(int A[],int left,int mid,int right){
  int n1 = mid-left;
  int n2 = right-mid;

  int L[n1+1];
  int R[n2+1];

  for(int i=0;i<n1;i++){
    L[i] = A[left+i];
  }

  for(int i=0;i<n2;i++){
    R[i] = A[mid+i];
  }

  L[n1] = INFTY;
  R[n2] = INFTY;

  int i=0;
  int j=0;

  for(int k=left;k<right;k++){
    C++;
    if(L[i]<=R[j]){
      A[k] = L[i];
      i++;
    }else{
      A[k] = R[j];
      j++;
    }
  }
}

void MergeSort(int A[],int left,int right){
  if(left+1 < right){
    int mid = (left+right)/2;
    MergeSort(A,left,mid);
    MergeSort(A,mid,right);
    Merge(A,left,mid,right);
  }
}

int main(){
  int n;
  cin >> n;

  int S[500000];
  for(int i=0;i<n;i++){
    cin >> S[i];
  }

  MergeSort(S,0,n);

  for(int i=0;i<n;i++){
    if (i)
			cout << " ";
    cout << S[i];
  }
  cout << endl;

  cout << C << endl;

  return 0;
}

