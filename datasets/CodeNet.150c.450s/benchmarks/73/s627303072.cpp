#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<string>
 
const int MAX_N=1<<17;
 
using namespace std;
 
int n,bit[MAX_N+1];
 
int sum(int i){
  int s=0;
  while(i>0){
    s+=bit[i];
    i-=i&-i;
  }
  return s;
}
 
void add(int i,int x){
  while(i<=n){
    bit[i]+=x;
    i+=i&-i;
  }
}
 
int main(void){
 
  int q,com,a,b;
 
  cin >> n >> q;
  n++;
  while(q--){
    cin >> com >> a >> b;
    if(com)cout << sum(b+1)-sum(a) << endl;
    else add(a+1,b);
  }
 
  return 0;
}
