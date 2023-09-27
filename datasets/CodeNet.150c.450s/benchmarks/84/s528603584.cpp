/****************
 *		*
 *ALDS_1_5_D	*
 *The Number	*
 *Of Inversions	*
 *		*
 *2019/08/31	* 
 *		*
 ****************/

#include<iostream>
#include<cstdio>

using namespace std;

#define MAX_ARRAY 500000
#define MAX_LIMIT 1000000001

int S[MAX_ARRAY];

/*
 *整列済みの２つの配列を１つの配列にまとめる関数
 */
long long merge(int left,int mid,int right){
  int i,j,k;
  int n1 = mid - left;
  int n2 = right - mid;
  int Left[MAX_ARRAY/2+1];
  int Right[MAX_ARRAY/2+1];
  long long  count_inversion = 0;
  
  for(i=0;i<n1;i++) Left[i] = S[left + i];
  Left[n1] = MAX_LIMIT;
  for(j=0;j<n2;j++) Right[j] = S[mid + j];
  Right[n2] = MAX_LIMIT;

  i=0;
  j=0;

  for(k=left;k<right;k++){
    if(Left[i] <= Right[j]){
      S[k] = Left[i];
      i++;
    }
    else {
      S[k] = Right[j];
      j++;
      count_inversion += (n1-i);
    }
  }

  return count_inversion;
}

/*
 *配列をマージソートする関数
 *
*/

long long mergeSort(int left,int right){
  if((left + 1) < right){
    long long inversion;
    long long inversion_left;
    long long inversion_right;
    int mid = (left + right)/2;
    
    inversion_left = mergeSort(left,mid);
    inversion_right = mergeSort(mid,right);
    inversion = merge(left,mid,right);

    return inversion_left + inversion + inversion_right;
  }
  else
    return 0;  
}

int main(void){
  int n=0;
  long long count_inversion=0;
  /*入力*/
  scanf("%d",&n);
  for(int i=0;i<n;i++) scanf("%d",&S[i]);

  /*処理*/
  count_inversion = mergeSort(0,n);

  /*出力*/
  printf("%lld\n",count_inversion);
  
  return 0;
}

