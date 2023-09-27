#include<iostream>
using namespace std;

void bit_init(int n);
int bit_sum(int n);
void bit_add(int n,int v);

int BIT[10000010],bit_size;

int main(){
  int n,q;
  cin >>n >>q;

  bit_init(n);
  int com,x,y;
  for(int i=0;i<q;i++){
    cin >> com >> x >> y;
    if(com==0){bit_add(x,y);
    }    else{
      cout << bit_sum(y)-bit_sum(x-1) << endl;
    }
  }
  
}

void bit_init(int n){
  fill(BIT,BIT+n,0);
  bit_size =n;
}

int bit_sum(int n){
  int ans=0;
  while(n>0){
    ans += BIT[n];
    n &= n-1;
  }
  return ans;
}

void bit_add(int n,int v){
  while(n <= bit_size){
    BIT[n]+=v;
    n += n & (-n);
  }
}