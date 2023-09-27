#include<bits/stdc++.h>
using namespace std;
#define OUT(x) cout<<x<<endl
int main(){
  int n,ud,ans;
  bool o;
  string ins;
  while(cin>>n&&n){
    o = false;
    ud = ans = 0;
    for(int i=0;i<n;i++){
      cin >> ins;
      if(ins == "lu" || ins == "ru")ud++;
      else ud--;
      if(!o&&ud==2){
	ans++;
	o = true;
      }
      else if(o&&!ud){
	ans++;
	o = false;
      }
    }
    OUT(ans);
  }
}