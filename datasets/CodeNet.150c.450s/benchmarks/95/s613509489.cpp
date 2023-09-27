#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
int main(){


  while(1){
    int n;
    cin >> n;
    if(n==0)break;
    string s;
    int r=0,l=0,sum=0,ans=0;
    rep(i,n){
      cin >> s;
      
      if(s[0] == 'l'){
	if(l) l=0;
	else l=1;
      }
      if(s[0] == 'r'){
	if(r) r=0;
	else r=1;
      }
      if(sum == 0 && r+l == 2){
	sum = 2;
	ans++;
      }
      else if(sum == 2 && r+l==0){
	sum = 0;
	ans++;
      }
    }
    cout << ans << endl;
  }
}