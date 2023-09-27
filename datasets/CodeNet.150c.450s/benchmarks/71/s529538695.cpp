#include<iostream>
using namespace std;
int main(){
  int n;
  while(cin >>n){
    int solve = 0;
    for(int i=0; i<10; i++)
      for(int j=0; j<10; j++)
	for(int k=0; k<10; k++)
	  if(n-i-k-j>=0 && n-i-j-k<10) solve++;
    cout <<solve<<endl;
  }
  return 0;
}