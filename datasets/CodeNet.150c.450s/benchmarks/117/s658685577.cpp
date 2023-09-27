#include<iostream>
#include<vector>
#include<cstdio>

#define INF 1000000001

int cnt=0;

void merge(int *A,int left,int mid,int right){
  std::vector<int> lArray,rArray;
  
  for(int i = 0;i < mid-left;++i){
    lArray.push_back(A[left+i]);
  }
  
  for(int i=0;i<right-mid;++i){
    rArray.push_back(A[mid+i]);
  }
  
  //???????????????
  lArray.push_back(INF);
  rArray.push_back(INF);
  
  int lCount = 0, rCount=0;
  
  for(int i=left;i<right;++i){
    cnt++;
    if(lArray[lCount] <= rArray[rCount]){
      A[i] = lArray[lCount];
      lCount++;
    }else{
      A[i] = rArray[rCount];
      rCount++;
    }
  }
}

void mergeSort(int *A,int left,int right){
  //right????????????????´?
  if(left + 1 < right){
    int mid = (left+right)/2;
    mergeSort(A,left,mid);
    mergeSort(A,mid,right);
    merge(A,left,mid,right);
  }
}


int main() {
  int A[500001];
  
  int n;
  std::cin >> n;
  
  for(int i=0;i<n;++i){
    std::cin >> A[i];
  }
  
  mergeSort(A,0,n);
  
  for(int i=0;i<n;++i){
    if(i)std::cout << " ";
    std::cout << A[i];
  }
  std::cout << std::endl;
  
  std::cout << cnt << std::endl;
  
  return 0;
}