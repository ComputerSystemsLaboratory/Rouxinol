#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
bool checkSosuu(int);
int main(){/*
  for(int i = 0;i < 10000;i++){
    if(checkSosuu(i))cout << i <<endl;
  }
  return 0;
	   */
  while(true){
    int a,d,n;
    cin >> a;
    cin >> d;
    cin >> n;
    if(a == 0 && d == 0 && n == 0)return 0;
    int i = 0;
    int cnt = 0;
    
    while(true){
      int tmp;
      tmp = a+i*d;
      if(checkSosuu(tmp)){
	cnt++;
	//	cout << tmp  << " " << cnt << endl;
      }
      i++;
      if(cnt == n){
	cout << tmp << endl;
	break;
      }
    }
    
  }
 
  return 0;
}
bool checkSosuu(int n){
  if(n < 2)return false;
  if(n == 2)return true;
  if(n%2 == 0)return false;
  
  for(int i = 3;i <= sqrt(n);i=i+2){
    if(n%i == 0){
      return false;
    }
  }
  return true;
} 