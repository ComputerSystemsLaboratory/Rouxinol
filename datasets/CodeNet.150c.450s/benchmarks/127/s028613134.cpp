#include <iostream>
#include <algorithm>
#include <set>

using  namespace std;
set<string> se;
int main(){

  int m;
  cin>>m;
  for(int i = 0;i<m;i++){
    string s;
    cin>>s;
    se.insert(s);
    for(int j = 1;j<=s.size();j++){
      string tmp = s.substr(0,j);
      string tmp2 = s.substr(j);
      se.insert(tmp2+tmp);
      reverse(tmp.begin(),tmp.end());
      se.insert(tmp + tmp2);
      se.insert(tmp2 + tmp);
      reverse(tmp2.begin(),tmp2.end());
      se.insert(tmp + tmp2);
      se.insert(tmp2 + tmp);
      reverse(tmp.begin(),tmp.end());
      se.insert(tmp2+ tmp);
      se.insert(tmp+tmp2);
      

    }
    /*
    set<string>::iterator itr = se.begin();
    while(itr != se.end()){
      cout<<*itr<<endl;
      itr++;
    }
    */
    cout<<se.size()<<endl;
    se.clear();
  }


  return 0;
}