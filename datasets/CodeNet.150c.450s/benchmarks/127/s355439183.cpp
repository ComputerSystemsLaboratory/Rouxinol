//13
#include<iostream>
#include<string>
#include<set>

using namespace std;

int main(){
  int m;
  cin>>m;
  while(m--){
    string s;
    cin>>s;
    set<string> sset;
    for(int i=1;i<s.size();i++){
      for(int j=0;j<2;j++){
	string t(s.begin(),s.begin()+i);
	string b(s.begin()+i,s.end());
	if(j){
	  swap(t,b);
	}
	for(int k=0;k<4;k++){
	  string tt=t,bb=b;
	  if(k&1){
	    tt=string(t.rbegin(),t.rend());
	  }
	  if(k&2){
	    bb=string(b.rbegin(),b.rend());
	  }
	  sset.insert(tt+bb);
	}
      }
    }
    cout<<sset.size()<<endl;
  }
  return 0;
}