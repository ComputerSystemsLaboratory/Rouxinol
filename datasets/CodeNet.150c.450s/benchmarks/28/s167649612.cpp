#include <iostream>
#define N 100001
using namespace std;
int Search(int);
int Check(int);
int n,k,w[N];
int main(){
  int r,sum=0,i;
  cin >> n >> k;
  for(i=0;i<n;i++) cin >> w[i],sum+=w[i];
  r=Search(sum);
  cout << r << endl;
  return 0;
}
int Search(int right){
  int r,left=0,mid,flag=0;
  while(1){
    mid=(left+right)/2;
    r=Check(mid);
    if(r==0) left=mid;
    else if(r==1) right=mid; 
    if(left+1==right) break;
  }
  return right;
}
int Check(int m){
  int sum=0,cnt=0,i,j;
  for(i=0;i<n;i++){
    j=i;
    while(1){
      if(w[j]>m) return 0;
      if(j<=n-1&&sum+w[j]<=m){
	sum+=w[j];
	j++;
      }else break;
    }
    sum=0;
    i=j-1;
    cnt++;
  }
  if(cnt<=k) return 1;
  return 0;
}