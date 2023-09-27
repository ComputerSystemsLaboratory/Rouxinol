#include<bits/stdc++.h>
using namespace std;
#define MAX 100000000
vector< bool > prime( MAX+1, true);
 
void get_prime(int n){
  if(n >= 0) prime[0] = false;
  if(n >= 1) prime[1] = false;
   
  for(int i = 2; i * i <= n; i++){
    if(prime[i]){
      for(int j = i + i; j <= n; j += i) prime[j] = false;
    }
  }
}

int main(){
  get_prime(MAX);
  int a,d,n;
  while(cin >> a >> d >> n , a){
    int cnt = 0;
    int idx = 0;
    while(cnt != n){
      if(prime[a+idx*d]) cnt++;
      idx++;
    }
    cout << a+(idx-1)*d << endl;
  }
}