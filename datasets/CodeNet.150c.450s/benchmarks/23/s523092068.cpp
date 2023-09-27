#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int memo[111]={0};

int fib(int n){
  if(n==0||n==1)return memo[n]=1;
  if(memo[n]!=0)return memo[n];
  return memo[n]=fib(n-1)+fib(n-2);
}

int main(){
  int a;

  scanf(" %d",&a);

  fib(a);

  cout << memo[a] << endl;

  return 0;

}