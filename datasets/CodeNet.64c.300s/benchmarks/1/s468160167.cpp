/****************
 *		*
 * ALDS_1_6_B	*
 * Partition	*
 *		*
 * 2019/08/21	*
 *		*
 ****************/

#include<iostream>
#include<vector>

using namespace std;

#define	MAX_ARRAY	100000
#define MAX		100000

int A[MAX_ARRAY];

void swap(int i,int j){
  int temp = A[i];
  A[i] = A[j];
  A[j] = temp;

  return;
}

int partition(int p,int r){
  int x = A[r];
  int i = p-1;

  for(int j=p;j<r;j++){
    if(A[j] <= x){
      i++;
      swap(i,j);
    }
  }
  swap(i+1,r);

  return i+1;
  
}

int main(void){
  int n=0;
  int standard = 0;
  cin >> n;
  for(int i=0;i<n;i++) cin >>A[i];

  standard = partition(0,n-1);

  for(int i=0;i<n;i++){
    if(i > 0) cout << " ";

    if(i == standard)
      cout << "[" << A[i] << "]"; 
    else
      cout << A[i];
  }
  cout << "\n";
  
  return 0;
}

