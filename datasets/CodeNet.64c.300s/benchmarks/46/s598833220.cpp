#include<iostream>
#include<cstdio>
#include<cmath>
#define MAX 1000000
using namespace std;
bool prime[MAX];

void makeit(){
  for(int i=3;i<=MAX;i+=2)prime[i] = true;

  prime[2] = true;

  int lim = sqrt(MAX)+1;
  for(int i=3;i<=lim;i++){
    if(!prime[i])continue;
    for(int j=pow(i,2);j<=MAX;j+=i){
      prime[j] = false;
    }
  }
}


int main(){
  for(int i=0;i<MAX;i++)prime[i] = false;
  makeit();
  int a,b,c;
  int cou,i;
  while(cin >> a >> b >> c && a && b && c){
    cou = 0;
    for(i=a;cou != c;i+=b){
      if(prime[i])cou++;
    }
    cout << i-b << endl;
  }

  return 0;
}