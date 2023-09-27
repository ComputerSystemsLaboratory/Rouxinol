#include <bits/stdc++.h>
using namespace std;
#define Rep(i,N) for(int i = 0;i < N;i++)

int data[500005];
int cnt = 0;

void merge(int left,int mid,int right)
{
  int n2 = right - mid;
  int n1 = mid - left;
  int ar1[250005];
  int ar2[250005];
  Rep(i,n1) {		    
    ar1[i] = data[left + i];
  }
  Rep(i,n2) {
    ar2[i] = data[mid + i];
  }
  int i = 0, j = 0;
  ar1[n1] = INT_MAX;
  ar2[n2] = INT_MAX;
  for(int k = left; k < right;k++) {
    cnt++;
    if(ar1[i] < ar2[j]) {
      data[k] = ar1[i++];
    }else {
      data[k] = ar2[j++];
    }
  }
  return;
}

void merge_sort(int left,int right)
{
  if(right - left > 1) {
    int mid = left + (right - left) / 2;
    merge_sort(left,mid);
    merge_sort(mid,right);
    merge(left,mid,right);
  }
  return;
}


int main()
{
  int N;
  cin >> N;
  Rep(i,N)cin >> data[i];
  merge_sort(0,N);
  Rep(i,N - 1)cout << data[i] << " ";
  cout << data[N - 1] << endl << cnt << endl;
  return 0;
}