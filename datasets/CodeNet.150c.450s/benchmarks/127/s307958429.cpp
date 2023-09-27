#include <bits/stdc++.h>
using namespace std;

string rev(string s){
  string ans="";
  for(int i=s.size()-1; i>=0; i--)
    ans += s.substr(i,1);
  return ans;
}

int main(){

  int n;
  cin >> n;
  for(int k=0; k<n; k++){
    string s;
    cin >> s;
    vector<string> ans;
    for(int i=1; i<s.size(); i++){
      for(int j=0; j<8; j++){
	string pre  = s.substr(0,i);
	string late = s.substr(i,s.size()-i);
	if(j%4 > 1)
	  pre = rev(pre);
	if(j%8 > 3)
	  late = rev(late);
	if(j%2==1)
	  swap(pre,late);
	ans.push_back(pre+late);
      }
    }
    sort(ans.begin(),ans.end());
    ans.erase(unique(ans.begin(),ans.end()), ans.end());
    cout << ans.size() <<endl;
  }
}