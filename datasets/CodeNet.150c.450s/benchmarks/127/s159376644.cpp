#include "algorithm"
#include "iostream"
#include "cmath"
#include "string"
#include "map"
using namespace std;


int main(){
  string S;
  string S1,S2;
  map<string,int> ans;
  int m;
  cin >> m;
  while(m--){
    cin >>S;
    for(int i=1;i<S.size();++i){
      S1=S.substr(0,i);
      string tmp=S1;
      S2=S.substr(i,S.size()-1);

      ans.insert(map<string,int>::value_type(S1+S2,100));
      ans.insert(map<string,int>::value_type(S2+S1,100));
      reverse(S1.begin(),S1.end());
      ans.insert(map<string,int>::value_type(S1+S2,100));
      ans.insert(map<string,int>::value_type(S2+S1,100));
      reverse(S2.begin(),S2.end());
      ans.insert(map<string,int>::value_type(S1+S2,100));
      ans.insert(map<string,int>::value_type(S2+S1,100));

      ans.insert(map<string,int>::value_type(tmp+S2,100));
      ans.insert(map<string,int>::value_type(S2+tmp,100));

    }
    cout << ans.size() <<endl;
    ans.clear();
  }

  return 0;
}