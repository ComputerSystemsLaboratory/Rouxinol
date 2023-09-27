#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i=(int)a,i<(int)b;++i)

int main(){

  while(1){
    int n;
    cin >> n;
    if(n==0) break;
    string s;
    int ans=0;
    int l=0,r=0,pre=0;
    //    rep(i,0,n){
    for(int i = 0; i<n;i++){
      cin >> s;
      if(s[0] == 'l'){
	l+=1;
	l%=2;
      }
      if(s[0] == 'r'){
	r+=1;
	r%=2;
      }
      if(pre == 0 && l==1 && r==1){
	ans++;
	pre=1;
      }
      if(pre == 1 && l == 0 && r == 0){
	ans++;
	pre=0;
      }
    }
    cout << ans << endl;
  }
  return 0;
}