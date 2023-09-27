//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_B&lang=jp
#include <iostream>
#include <vector>
using namespace std;

int counter = 0;
const int infi = 1000000000;
void merge(int A[], int left, int mid, int right){
  int n1 = mid - left;
  int n2 = right - mid;
  int L[n1+1], R[n2+1];
  for(int i = 0; i<n1; i++){
    L[i] = A[left + i];
  }
  for(int i = 0; i<n2; i++){
    R[i] = A[mid + i];
  }
  L[n1] = infi;
  R[n2] = infi;
  int countL = 0, countR = 0;
  for(int i = left; i < right; i++){
    if(L[countL] <= R[countR]){
      A[i] = L[countL];
      countL++;
    }
    else{
      A[i] = R[countR];
      countR++;
    }
    counter++;
    //cout << A[i] << " ";
  }
  //cout << endl;
}



void mergeSort(int A[], int left, int right){
  if (left+1 < right) {
    int mid = (left+right)/2;
    //????????¨???????????§5/2 = 2?????????
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
  }
}


int main(){
  int n;
  cin >> n;
  int S[n];
  for(int i=0; i<n; i++){
    cin >> S[i];
  }//????????????????????????
  //S[n] = 123456;
  mergeSort(S,0,n);
  for(int i=0; i<n-1; i++){
  cout << S[i] << " ";
  }
  cout << S[n-1] << endl;
  cout << counter << endl;
  return 0;
}