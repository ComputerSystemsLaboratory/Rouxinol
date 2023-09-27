#include <bits/stdc++.h>

using namespace std;
#define MAX 200000
#define SENTINEL 2000000000
typedef long long llong;
llong mergeSort(int[],int,int,int);
llong merge(int[], int, int, int,int);


int L[MAX/2+2];
int R[MAX/2+2];

int main(){
  int pre[MAX],num,i;
  llong ans;
  cin >> num;
  for(i = 0; i < num; i++){
    cin >> pre[i];
  }
  ans = mergeSort(pre,num,0,num);
  cout << ans << endl;
  return 0;
}


llong merge(int pre[], int num, int left, int mid ,int right){
  int i,j,k;
  llong cnt = 0;
  int num1 = mid-left;
  int num2 = right - mid;
  for(i = 0; i < num1; i++){
    L[i] = pre[left+i];
  }
  for(i = 0; i < num2; i++){
    R[i] = pre[mid + i];
  }
  L[num1] = R[num2] = SENTINEL;
  i = j = 0;
  for(k = left; k < right; k++){
    if(L[i] <= R[j]){
      pre[k] = L[i++];
    }
    else{
      pre[k] = R[j++];
      cnt += num1 - i;
    }
  }
  return cnt;
}


llong mergeSort(int pre[], int num, int left,int right){
  int mid;
  llong v1,v2,v3;
  if(left + 1 < right){
    mid = (left+right)/2;
    v1 = mergeSort(pre,num,left,mid);
    v2 = mergeSort(pre, num, mid,right);
    v3 = merge(pre, num, left, mid,right);
    return v1+v2+v3;
  }else{
    return 0;
  }
}