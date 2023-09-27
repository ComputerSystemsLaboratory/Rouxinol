#include <iostream>
#include <algorithm>
using namespace std;
string tbl[]={"",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int p=0,c=0;
    for(int i=0;i<s.length();++i){
      if(s[i]=='0'){
	if(p||c) cout<<tbl[p][c%tbl[p].length()];
	p=0;
	c=0;
      }
      else{
	if(!p) p=s[i]-'0';
	else ++c;
      }
    }
    cout << endl;
  }
  return 0;
}