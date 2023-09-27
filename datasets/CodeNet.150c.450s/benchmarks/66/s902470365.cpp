#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n;
  map<string,int> flg;
  for(int i=0;i<n;i++){
    string str;
    cin >> str;
    flg[str] = 1;
  }
  cin >> m;
  int now = 1;
  for(int i=0;i<m;i++){
    string str;
    cin >> str;
    if(flg[str] == 1){
      if(now) {
	cout << "Opened by " << str << endl;
	now = 0;
      }
      else {
	cout << "Closed by " << str << endl;
	now = 1;
      }
    }
    else {
      cout << "Unknown " << str << endl;
    }
  }
}