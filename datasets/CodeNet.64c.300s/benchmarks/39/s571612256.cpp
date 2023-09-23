#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
  int num;
  while(cin >> num){
    int sum =0;
    int count =0;
    for(int a=0 ; a<=9 ; a++){
      for(int b=0 ; b<=9 ; b++){
	for(int c=0 ; c<=9 ; c++){
	  for(int d=0 ; d<=9 ; d++){
	    if(a+b+c+d == num)count++;
	  }
	}
      }
    }
    cout << count << endl;
  }
  return 0;
}