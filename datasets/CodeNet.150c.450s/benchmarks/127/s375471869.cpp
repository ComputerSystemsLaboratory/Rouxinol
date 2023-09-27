#include <set>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  int c,l,ms;
  string s,s2,s2fr,s2br;
  set<string> m;
  cin>>c;
  for(int i=0;i<c;i++){
    cin >>s;
    l=s.size();
    for(int j=1;j<l;j++){
      s2=s;
      m.insert(s2);
      s2.clear();

      s2.append(&s[j],&s[l]);s2.append(&s[0],&s[j]);
      m.insert(s2);
      s2.clear();

      s2fr.clear();
      s2br.clear();
      for(int k=j;k>0;k--){
	s2fr+=s[k-1];
      }
      for(int k=l;k>j;k--){
	s2br+=s[k-1];
      }
 
      s2+=s2fr;s2.append(&s[j],&s[l]);
      m.insert(s2);
      s2.clear();

      s2.append(&s[j],&s[l]);s2+=s2fr;
      m.insert(s2);
      s2.clear();

      s2.append(&s[0],&s[j]);s2+=s2br;
      m.insert(s2);
      s2.clear();

      s2+=s2br;s2.append(&s[0],&s[j]);
      m.insert(s2);
      s2.clear();

      s2=s2fr+s2br;
      m.insert(s2);
      s2.clear();

      s2=s2br+s2fr;
      m.insert(s2);
      s2.clear();
    }
    ms=m.size();
    cout<<ms<<endl;
    m.clear();
  }
  return 0;
}