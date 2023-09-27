#include <iostream>
using namespace std;

#define rep(i,n) for(int i=0;i<(int)n;i++)
int main(){

  while(1){
    int n;
    cin >> n;
    if(n== 0) break;
    int l=0,r=0,wh=0,ans=0;;

    rep(i,n){
      string s;
      cin >> s;
      if(s == "lu") l = 1;
      else if(s == "ld") l = 0;
      else if(s == "ru") r = 1;
      else if(s == "rd") r = 0;

      if(wh == 0 && l == 1 && r == 1){
	ans++; wh = 1;
		 } 
      else if(wh == 1 && l == 0 && r == 0){
	ans++; wh = 0;
      }
    }
    cout << ans << endl; 
  }
    return 0;
  }