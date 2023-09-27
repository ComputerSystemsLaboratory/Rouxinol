#include<iostream>
using namespace std;
int GCD(int n,int m){
  if(n<m){
    int t;
    t = m;
    m = n;
    n = t;
  }
  int i;
  while(n%m != 0){
    i = n%m;
    n = m;
    m = i;
  }
  return m;
    
}
int main(){
  int n,m,i=0,a[50],b[50];
  while(cin >> n >> m){
    a[i] = GCD(n,m);
    b[i] = m/GCD(n,m)*n;
    i++;
    n = 0;
    m = 0;
  }
  for(n=0;n<i;n++) cout << a[n] << " " << b[n] << endl;
  return 0;
}