#include<iostream>
using namespace std;

int coin[6] = {500,100,50,10,5,1};

int main(){
  int n;
  while(cin >> n,n){
    n = 1000-n;
    int pos = 0, ans = 0;
    while(n){
      if(n>=coin[pos]){
	n -= coin[pos];
	ans++;
      }else{
	pos++;
      }
    }
    cout << ans << endl;
  }
}
      