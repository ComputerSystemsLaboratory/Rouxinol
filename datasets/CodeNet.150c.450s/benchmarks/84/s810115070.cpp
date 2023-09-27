#include<bits/stdc++.h>
#define INF 1e9
using namespace std;

typedef long long ll;

ll cnt_m;
ll cnt_b;

//分割統治で考える。Aはもともとswapされる配列なので、mergeSortで分割した後、R[]の項が選ばれれば
//swap回数が減る。

ll merge(int A[],int left,int mid,int right)
{
  ll res = 0;
  
  int n1 = mid - left;
  int n2 = right - mid;

  int L[n1+1],R[n2+1];
  for(int i=0;i < n1;i++){
    L[i] = A[left+i];
  }
  for(int i=0;i < n2;i++){
    R[i] = A[mid+i];
  }
  
  L[n1]=R[n2]=INF;
  
  int i=0,j=0;
  for(int k=left;k < right;k++){
    if(L[i] <= R[j]){
      A[k] = L[i++];
    }
    else{
      A[k] = R[j++];
      res += n1-i;
      //R[]の項が選ばれたとき、swapの回数が減る。(iが増える)
      //また、
    }
  }
  return res;
}

ll mergeSort(int A[],int left,int right)
{
  ll cnt1,cnt2,cnt3;
  
  if(left+1 < right){
    int mid = (left + right)/2;
    cnt1 = mergeSort(A,left,mid);
    cnt2 = mergeSort(A,mid,right);
    cnt3 = merge(A,left,mid,right);
    return cnt1+cnt2+cnt3;
  }
  else return 0;
}

int bubbleSort(int A[],int n)
{
  int i,j;
  int temp;
  
  for(i = 0; i < n ;i++){
    for(j = n-1; j > i ;j--){
      
      if( A[j-1] > A[j] ){
	swap(A[j-1],A[j]);
	cnt_b++;
      }
    }
  }
}

int main()
{
  int i;
  int n;
  int A[200001];
  int B[200001];
  
  scanf("%d",&n);

  for(i = 0;i < n;i++){
    scanf("%d",&A[i]);
    B[i] = A[i];
  }

  cnt_m = mergeSort(A,0,n);

  //bubbleSort(B,n);

  //for(int i=0;i < n;i++) cout << A[i];
  //cout << endl;

  //cout << cnt_m << endl << "cnt_b = " << cnt_b << endl;
  cout << cnt_m << endl;
  return 0;
}


