#include <bits/stdc++.h>
using namespace std;

#define MAX 500000

int n;
int arr[MAX+2];
int cnt;
int L[MAX/2+2],  R[MAX/2+2];

void marge(int left, int mid, int right){

  int end1 = mid - left;
  int end2 = right - mid;
  
  //cout << "left";
  for(int i = 0; i < end1; i++){
    L[i] = arr[left+i];
    // cout << arr[left+i] << " ";
  }
  //cout << " right";
  for(int i = 0; i < end2; i++){
    R[i] = arr[mid+i];
    //    cout  << arr[mid+i] << " ";
  }
  L[end1] = R[end2] = INT_MAX;
  int s = 0, l = 0;

  for(int i = left; i < right; i++){
    cnt++;
    if(L[s] <= R[l]){
      arr[i] = L[s];
      s++;
    }else{
      arr[i] = R[l];
      l++;
    }
    // cout << L[s] << " " << R[l] << endl;
  }


}


void margesort(int left, int right){

  if(left+1 < right){
    int mid = (left+right)/2;
    margesort(left,mid);
    margesort(mid,right);
    marge(left,mid,right);
  }


}

int main(){

  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  margesort(0,n);

  for(int i = 0; i < n; i++){
    if(i != n-1)    cout << arr[i] << " ";
    else cout << arr[i] << endl << cnt << endl;
  }



}