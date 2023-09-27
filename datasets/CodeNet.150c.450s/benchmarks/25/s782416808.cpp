#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;
int cnt[27];
int main(){
string data;
  while(getline(cin, data)) {
	  transform(data.begin(),data.end(),data.begin(),::toupper);
	  auto p=data.begin();
	  while(p!=data.end()){
	    if('A'<=*p&&*p<='Z')++cnt[*p-'A'];
	    ++p;
	  }
  }
  for(int i=0;i<26;++i){
    cout << (char)('a'+i) << " : " << cnt[i] << endl;
  }
  return 0;
}