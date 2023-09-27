#include <iostream>
using namespace std;

int main(){
  int n;
  while(cin >> n){
    int num=0;
    for(int i=0; i<=9; i++)
      for(int j=0; j<=9; j++)
	for(int k=0; k<=9; k++){
	  if((n-i-j-k)>=0 && (n-i-j-k)<=9)
	    num++;
	}
    cout << num << endl;
  }
  return 0;
}