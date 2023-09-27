#include <bits/stdc++.h>
using namespace std;
vector<vector<char> > button(10);


int main(void){
  char c = 'a';
  button[1].push_back('.');
  button[1].push_back(',');
  button[1].push_back('!');
  button[1].push_back('?');
  button[1].push_back(' ');
  for(int i=2; i <= 9; i++){
    if(i == 7 || i == 9){
      for(int j=0; j < 4; j++){
	button[i].push_back(c);
	c++;
      }
    }else{
      for(int j=0; j < 3; j++){
	button[i].push_back(c);
	c++;
      }
    }
  }


  int n;
  string s;
  cin >> n;
  while(n--){
    cin >> s;
    int cnt=0;
    string mes;
    for(int i=0; i < s.length(); i++){
      if(s[i] == '0'){
	if(i == 0)      continue;
	if(s[i-1] == '0') continue;
	mes.append(1, button[s[i-1]-'0'][(cnt-1)%button[s[i-1]-'0'].size()]);
	cnt = 0;
      }else{
	cnt++;
      }
    }
    cout << mes << endl;
  }
  return 0;
}