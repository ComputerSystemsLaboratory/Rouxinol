#include<iostream>
using namespace std;

int combination(int n){
  int temp = 0;
  for(int i = 0;i < 10;i++)
    for(int j = 0;j < 10;j++)
      for(int k = 0;k < 10;k++)
	if((n - i - j - k) >= 0 && (n -i -j -k) <10)
	  temp++;
  return temp;
}


int main(){
  int n;
  while(cin >> n){
    cout << combination(n) << endl;
  }
}