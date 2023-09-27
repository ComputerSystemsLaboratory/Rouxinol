#include<iostream>
using namespace std;

int k,n;
long long w[100000];

int num(long long p){
  int j=0;
  for(int i=0;i<k;i++){
    int sum=0;
    while(sum+w[j]<=p){
      sum+=w[j];
      j++;
      if(j==n)return n;
    }
  }
  return j;
}

int search(){
  long long left=0,right=100000*10000,mid;
  while(right-left>1){
    mid=(right+left)/2;
    int v=num(mid);
    // cout<<v<<" ";
    if(v>=n)right=mid;
    else left=mid;
  }
  return right;
}
int main(){
    int p;
    cin>>n>>k;
    for(int i=0;i<n;i++){
      cin>>w[i];
    }
    long long ans=search();
    cout<<ans<<endl;
    return 0;
}