#include <bits/stdc++.h>
#define N 100000
using namespace std;
int n;
int A[2000010],B[2000010];

void Csort(){
  int cnt[N]={};
  for(int i=0;i<n;i++) cnt[A[i]]++;
  for(int i=1;i<N;i++) cnt[i]+=cnt[i-1];
  for(int i=0;i<n;i++) B[cnt[A[i]]--] = A[i];
}

int main(){
  cin>>n;
  for(int i=0;i<n;i++) scanf("%d",&A[i]);
  Csort();
  for(int i=1;i<=n;i++){
    if(i>1)printf(" ");
    printf("%d",B[i]);
  }
  cout<<endl;
  return 0;
}