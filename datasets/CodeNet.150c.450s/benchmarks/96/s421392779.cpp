#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;
vector<char> key[10];

void Init(){
  int index=0;
  key[1].push_back('.');key[1].push_back(',');key[1].push_back('!');key[1].push_back('?');key[1].push_back(' ');
  for(int i=2;i<=9;i++){
    if(i == 7 || i == 9){
      for(int j=0;j<4;j++){
	key[i].push_back((char)('a'+index));
	index++;
      }	
    }else{
      for(int j=0;j<3;j++){
	key[i].push_back((char)('a'+index));
	index++;
      }
    }
  }
  key[0].push_back('_');
  /*
  for(int i=0;i<=9;i++){
    for(int j=0;j<key[i].size();j++){
      cout << key[i][j] << " ";
    }
    cout << endl;
  }
  */
}


int main(){
  Init();
  int T,div,cnt;
  string s;
  char th;
  bool zcnt;
  cin >> T;
  while(T-- > 0){
    cin >> s;
  
    char p = s[0];
    int cnt = 0;
    for(int i=0;i<s.length();i++){
      if(s[i] == '0'){
	//cout << "p = "<< p << ",cnt = " << cnt << endl;
	cnt--;
	int Size = key[p-'0'].size();
	if(p != '0')cout << key[p-'0'][cnt%Size];
	cnt = 0;
	p = s[i+1];
	continue;
      }
      cnt++;
    }cout << endl;
  }
  return 0;
}