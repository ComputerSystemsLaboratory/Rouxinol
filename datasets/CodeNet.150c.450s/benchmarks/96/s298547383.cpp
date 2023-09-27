#include <iostream>
using namespace std;

int main() {

  string key[10] ={
    "00000",
    ".,!? ",
    "abc",
    "def",
    "ghi",
    "jkl",
    "mno",
    "pqrs",
    "tuv",
    "wxyz"
  };


  int n;
  cin >> n;
  string str;
  for(int j=0;j<n;j++){
    cin >> str;
    int cnt = -1;
    int ima;
    for(int i=0;i<str.size();i++){
      if(cnt == -1 && str[i] == '0') continue;
      if(str[i] == '0'){
	cout <<key[ima][cnt%key[ima].size()];
	cnt = -1;
      }
      else{
	ima = str[i]-'0';
	cnt++;
      }   
    }
    cout << endl;
    
  }

    return 0;
}