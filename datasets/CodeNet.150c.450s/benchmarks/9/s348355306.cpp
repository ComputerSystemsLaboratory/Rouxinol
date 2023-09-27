#include<iostream>
#include<string>
using namespace std;
int main () {
  string str;
  int m;
  while(cin >> str, str != "-"){
  cin >> m;
  for(int i = 0; i < m ; i++){
    int d;
    cin >> d;
    string str2;
    copy(str.begin()+d, str.end(), back_inserter(str2));
    copy(str.begin(), str.begin()+d, back_inserter(str2));
    str = str2;
  }
  cout << str << endl;
  }
}