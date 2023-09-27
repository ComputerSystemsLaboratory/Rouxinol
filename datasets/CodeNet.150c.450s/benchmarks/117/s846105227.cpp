#include<bits/stdc++.h>
using namespace std;

#define INF 1000000001

long s[500000];
int cnt = 0;


void Merge(int left, int mid , int right){

  int n1 = mid-left;
  int n2 = right - mid;

  long L[250001],R[250001];

  for(int i=0; i<n1; i++)L[i] = s[left+i];

  for(int i=0; i<n2; i++)R[i] = s[mid+i];

  L[n1] = R[n2] = INF;
  
  int r,l=r=0;
  for(int i=left; i<right; i++){
    if(L[l] <= R[r]) s[i] = L[l++];
    else             s[i] = R[r++];
    cnt++;
  }

}

void MergeSort(int left, int right){
  if(left+1 < right){
    int mid = (left+right)/2;
    MergeSort(left , mid);
    MergeSort(mid , right);
    Merge(left , mid , right);
  }
}


int main(){
 
  int n;

  cin >> n;

  for(int i=0; i<n; i++)cin>>s[i];

  MergeSort(0 , n);

  cout << s[0];
  for(int i=1; i<n; i++)cout << ' ' <<s[i];
  cout << endl << cnt << endl;

  return 0;
}