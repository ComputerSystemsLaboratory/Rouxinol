#include <iostream>
using namespace std;

int partition(int a[],int p,int r) {
  int x=a[r]; 
  int i=p-1;
  for(int j=p;j<r;j++)
    if(a[j]<=x) i++,swap(a[i],a[j]);
 
  swap(a[i+1],a[r]); 
  return i+1;
}

int main(){
  int n,a[100001];
  cin>>n;
  for(int i=0;i<n;i++) cin>>a[i];

  int idx=partition(a,0,n-1);
  for(int i=0;i<idx;i++)cout <<a[i]<<" ";
  cout <<"["<<a[idx]<<"] ";
  for(int i=idx+1;i<n-1;i++) cout <<a[i]<<" ";
  cout << a[n-1]<<endl;
	
  return 0;
}