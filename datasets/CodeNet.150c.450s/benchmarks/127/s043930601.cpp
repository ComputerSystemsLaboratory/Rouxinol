#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;
void ins(string,string);
set<string> str;
int main(){
  int m,i,j,k,len;
  string in,stra,strb;
  cin >> m;
  for(i=0;i<m;i++){
    cin >> in;
    len=in.size();
    str.clear();
    for(j=0;j<len-1;j++){
      stra=in.substr(0,j+1);
      strb=in.substr(j+1,len-(j+1));
      ins(stra,strb);
    }
    cout << str.size() << endl;
  }
  return 0;
}
void ins(string a,string b){
  str.insert(a+b);
  str.insert(b+a);
  reverse(a.begin(),a.end());
  str.insert(a+b);
  str.insert(b+a);
  reverse(a.begin(),a.end());
  reverse(b.begin(),b.end());
  str.insert(a+b);
  str.insert(b+a);
  reverse(a.begin(),a.end());
  str.insert(a+b);
  str.insert(b+a);
}