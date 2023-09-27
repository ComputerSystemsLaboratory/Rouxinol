#include<algorithm>
#include<vector>

#include<iostream>
using namespace std;

vector<int> prime;
void prime_set(int n){
  n+=100;
  prime.resize(n);
  for(int i=0;i<n;i++){
    prime[i]=1;
  }
  prime[0]=prime[1]=0;
  for(int i=0;i*i<n;i++){
    if(prime[i]){
      for(int j=i*2;j<n;j+=i){
        prime[j]=0;
      }
    }
  }
}

int solve(int a,int b,int n){
  int c = 0;
  while(c!=n){
    c+=prime[a];
    a+=b;
  }
  return a-b;
}
int main(){
  prime_set(10000000);
  int a,b,n;
  while(cin>>a>>b>>n,a!=0&&b!=0&&n!=0){
    cout<<solve(a,b,n)<<endl;
  }
}