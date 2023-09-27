#include<iostream>
using namespace std;

int main(){
  int ma,ans,cou;
  int me[6] = {500,100,50,10,5,1};
  while(1){
    cou=0;
    cin >> ma;
    if(ma == 0) break;
    ans = 1000 - ma;
    while(ans != 0){
      for(int i=0;i<6;i++){
	if(ans >= me[i]){
	  ans -= me[i];
	  cou++;
	  break;
	}
      }
    }
    cout << cou << endl;
  }
}
  