#include<iostream>
using namespace std;

int getRandomNum(int a, int b, int c, int x){
  return (a * x +b) % c;
}

int getShortestFlame(int n, int a, int b, int c, int x, int array[]){
  int cnt=0,xd=x;
  for(int i=0;i<=10000;i++){
    if(array[cnt] == xd) cnt++;
    xd = getRandomNum(a,b,c,xd);
    if(cnt == n) return i;
  }
  return -1;
}

int main(){
  int n,a,b,c,x;
  int array[100];
  while(1){
    cin >> n >> a >> b >> c >>x;
    
    if(n+a+b+c+x==0) break;
    for(int i=0;i<n;i++){
      cin >> array[i];
    }
    cout << getShortestFlame(n,a,b,c,x,array) << endl;
  }
}