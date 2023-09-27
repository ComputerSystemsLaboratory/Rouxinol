/*
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_10_A&lang=jp
*/
#include<iostream>
using namespace std;
typedef long long ll;
#define rep(s,e) for(int i=s;i<e;i++)
ll A[44];
ll Fibo(int n){
  if(n==0 || n==1) return 1;
  if(A[n]!=0) return A[n];
  A[n-1]=Fibo(n-1);
  return A[n-1]+A[n-2];
}
int main(){
  int n;
  cin>>n;
  A[0]=A[1]=1;
  cout<<Fibo(n)<<"\n";
}

