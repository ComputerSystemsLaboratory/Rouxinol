#include<iostream>
using namespace std;

#define MAX 500000
#define INF 999999999

int l[MAX/2+2] = {};
int r[MAX/2+2] = {};
int c ;

int s[500000];

void merge(int left,int mid,int right){
  
  int i,j,k;
  int n1 = mid - left;
  int n2 = right - mid;
  
  for(i = 0;i < n1;i++) l[i] = s[left + i];
  for(i = 0;i < n2;i++) r[i] = s[mid + i];
  
  l[n1] = INF;
  r[n2] = INF;
  
  i = j = 0;
  
  for(k = left;k < right;k++){
    c++;
    if(l[i] <= r[j]){
      s[k] = l[i];
      i++;
    }
    else{
      s[k] = r[j];
      j++;
    }
  }
}

void mergesort(int left,int right){
  int mid;
  if(left + 1 < right){
    mid = (left + right) / 2;
    mergesort(left,mid);
    mergesort(mid,right);
    merge(left,mid,right);
  }
}

int main(void){
  int n,i;
  c=0;

  cin >> n;
  for(i=0;i<n;i++) cin >> s[i];

  mergesort(0,n);
  
  for(i=0;i<n;i++){
    if(i) cout << " ";
    cout << s[i];
  }
  
  cout << endl;
  cout << c << endl;
}