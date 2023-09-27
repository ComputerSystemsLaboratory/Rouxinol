#include <bits/stdc++.h>
using namespace std;

int n,m;
map<string,int> regi;
string s;
bool now=1;

int main(){
  int i;
  cin >> n;
  for(i=0;i<n;i++){
    cin >> s;
    regi[s]=1;
  }
  cin >> m;
  for(i=0;i<m;i++){
    cin >> s;
    if(regi.find(s)==regi.end())cout << "Unknown " << s << endl;
    else {
      if(now){
	cout << "Opened by " << s << endl;
	now=0;
      }
      else {
	cout << "Closed by " << s << endl;
	now++;
      }
    }
  }
  return 0;
}

