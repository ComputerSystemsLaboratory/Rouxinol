#include<iostream>
#include<string>

using namespace std;

int Atoi(const char);

int main(){
  int i, j, n, x, y;
  char c; 
  string str, _str, data[9];

  data[0] = ".,!? ";
  data[1] = "abc";
  data[2] = "def";
  data[3] = "ghi";
  data[4] = "jkl";
  data[5] = "mno";
  data[6] = "pqrs";
  data[7] = "tuv";
  data[8] = "wxyz";

  cin >> n;

  for(i=0; i<n; ++i){
    cin >> str;

    for(j=0, c='0'; j<str.size(); ++j){
      if(c != str[j]){
	if(c == '0'){
	  y = 0;
	  c = str[j];
	}else{
	  x = Atoi(c)-1;
	  y %= data[x].size();
	  _str.push_back(data[x][y]);
	  c = '0';
	}
      }else if(c != '0'){
	++y;
      }
    }

    cout << _str << endl;
    _str.clear();
  }
  return 0;
}

int Atoi(const char c){
  int x;
  x = c - 48;
  return x;
}