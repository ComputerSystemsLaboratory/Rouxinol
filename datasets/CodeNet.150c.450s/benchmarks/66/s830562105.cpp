#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
  string s[256];
  string sta;
  int n,m;
  int fl = 1;
  bool judge;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> s[i];
  }
  cin >> m;
  for(int i=0;i<m;i++){
    cin >> sta;
    judge = false;
    for(int j=0;j<n;j++){
      if(sta == s[j] && fl == 1){
	cout << "Opened by " << s[j] << endl;
	fl = 0;
	judge = true;
      }
      else if(sta == s[j] && fl == 0){
	cout << "Closed by " << s[j] << endl;
	fl = 1;
	judge = true;
      }
    }
    if(!judge) cout << "Unknown " << sta << endl;
  }

}