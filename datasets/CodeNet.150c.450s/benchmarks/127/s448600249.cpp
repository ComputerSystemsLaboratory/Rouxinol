#include<iostream>
#include<algorithm>
#include<string>
#include<set>
using namespace std;

int main(){
  int m;
  string s;

  cin >> m;
  for(int x=0;x<m;x++){
    cin >> s;
    set<string> ans;
    for(int i=1;i<s.size();i++){
      string a[2],b[2];
      a[0] = a[1] = s.substr(0,i);
      b[0] = b[1] = s.substr(i);
      reverse(a[1].begin(),a[1].end());
      reverse(b[1].begin(),b[1].end());

      for(int j=0;j<2;j++){
	for(int k=0;k<2;k++){
	  ans.insert(a[j]+b[k]);
	  ans.insert(b[j]+a[k]);
	}
      }
    }
    cout << ans.size() << endl;
  }
}