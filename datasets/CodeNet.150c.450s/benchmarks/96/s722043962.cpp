#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){

  string s[]={""," .,!?", "cab", "fde", "igh", "ljk", "omn", "spqr", "vtu", "zwxy"};
  int m[]={0, 5, 3, 3, 3, 3, 3, 4, 3, 4};
  string b;
  int n, cnt;

  cin>>n;
  for(int i=0;i<n;i++){
    cin>>b;
    cnt=0;
    for(int j=0;j<b.size();j++){
      if(b[j]=='0'){
	if(cnt){
	  cout<<s[b[j-1]-'0'][cnt%m[b[j-1]-'0']];
	  cnt=0;
	}
      }else cnt++;
    }
    cout<<endl;
  }
  
  return 0;
}