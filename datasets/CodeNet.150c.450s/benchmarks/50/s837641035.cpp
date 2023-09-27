#include <iostream>
using namespace std;

int main(){
  int m;
  while(cin >> m,m){
    int c=0;
    m=1000-m;
	while(m-500>=0){
	  m=m-500;
	  c++;
	}
	while(m-100>=0){
	  m=m-100;
	  c++;
	}
	while(m-50>=0){
	  m=m-50;
	  c++;
	}
	while(m-10>=0){
	  m=m-10;
	  c++;
	}
	while(m-5>=0){
	  m=m-5;
	  c++;
	}
	while(m-1>=0){
	  m=m-1;
	  c++;
	}
	cout << c << endl;
  }
  return 0;
}