#include<iostream>
#include<string>
#include<utility>
using namespace std;

int main(){
  int cou1,cou2,n,m;
  string ans,str;
  pair<string,string> hen[11111];
  while(1){
    ans = "";
    cin >> n;
    if(n == 0) break;
    for(int i=0;i<n;i++){
      cin >> hen[i].first >> hen[i].second;
    }
    cin >> m;
    for(int i=0;i<m;i++){
      cin >> str;
      for(int j=0;j<n;j++){
	if(hen[j].first == str){
	  str = hen[j].second;
	  break;
	}
      }
      ans += str;
    }
    cout << ans << endl;
  }
}