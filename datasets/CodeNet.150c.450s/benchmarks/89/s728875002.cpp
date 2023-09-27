#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

const int MAX = 1000001;

int prime[MAX];

void make(){
  fill(prime,prime+MAX,1);
  prime[0] = 0;
  prime[1] = 0;
  for(int i = 2; i < sqrt(MAX); i++){
    if(prime[i]){
      for(int j = 2*i; j < MAX; j+=i) prime[j] = 0;
    }
  }
}
int main(){
  make();
  int a,d,n;
  while(cin >> a >> d >> n && a+d+n){
    int rev = 0;
    while(1){
      if(prime[a]) rev++;
      if(n == rev) break;
      a+=d;
    }
    cout << a << endl;
  }
  return 0;
}