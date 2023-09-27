#include<iostream>
using namespace std;
int main(){
  int n,i,j,m,a=0;
  while(1){
    a=0;
    cin >> n;
    if(n==0)break;
    m=1000-n;
    while(m>0){
      if(m%500==0){
	a++;
	m=m-500;
      }
      else if(m%100==0){
	a++;
	m=m-100;
      }
      else if(m%50==0){
	a++;
	m=m-50;
      }
      else if(m%10==0){
	a++;
	m=m-10;
      }
      else if(m%5==0){
	a++;
	m=m-5;
      }
      else if(m%1==0){
	a++;
	m=m-1;
      }
    }
    cout << a << endl;
  }
}