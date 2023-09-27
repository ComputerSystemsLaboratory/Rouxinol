#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  int n,a,b,counta=0,countb=0;
  while(1){
    cin >> n;
    if(n==0) break;
    for(int i=0;i<n;i++){
      cin >> a >> b;
      if(a>b){
	counta=counta+a+b;
      } else if(a<b){
	countb=countb+a+b;
      } else if(a==b){
	counta+=a;
	countb+=a;
      }
    }
    cout << counta << " " << countb << endl;
    counta=0;
    countb=0;
  }
  return 0;
}