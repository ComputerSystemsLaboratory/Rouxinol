#include<iostream>
#include<string>
using namespace std;

int main(){

  int n,m;
  string s[1000],t[1000];
  bool a = true,b = true,c = true;

  cin >> n;
  for(int i=0;i<n;i++) cin >> s[i];

  cin >> m;
  for(int i=0;i<m;i++) cin >> t[i];

  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      if(s[j] == t[i] && a == true){
	cout << "Opened by " << t[i] << endl;
	a = false;
	b = false;
	break;
      }
      if(s[j] == t[i] && a == false){
	cout << "Closed by " << t[i] << endl;
	a = true;
	b = false;
	break;
      }
    }
    if(b == true) cout << "Unknown " << t[i] << endl;
    b = true;
  }
}