#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<cstdio>
using namespace std;
#define MAX 1000000
int prime[MAX];
bool is_prime[MAX+1];

int solve(int n){
  int p = 0; 
  //fill(prime,prime+MAX,true);
  for(int i = 0 ; i <= n ; i ++)is_prime[i] = true;
  is_prime[0] = is_prime[1] = false;
  for(int i = 2 ; i <= n ; i ++){
    if(is_prime[i]){
      prime[p++] = i;
      for(int j = i + i ; j <= n ; j += i){
	is_prime[j] = false;
      }
    }
  }
  return p;
}
int main(void){ 
  
  long long int n;
  while(cin>>n){
    cout<<solve(n)<<endl;
  }
  
}