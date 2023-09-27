#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;

map < string, int > m;

int main(){

  string s;
  int lenmax = 0;
  int nummax = 0;
  string tmp = "";
  string anslen,ansnum;

  getline(cin, s);

  for(int i=0;i<=s.size();i++){
    if(s[i] == ' ' || s[i] == '\0'){
      m[tmp]++;

      if(tmp.size() > lenmax){
	anslen = tmp;
	lenmax = tmp.size();
      }

      if(m[tmp] > nummax){
	ansnum = tmp;
	nummax = m[tmp];
      }

      i++;
      tmp = "";
    }
    
    tmp += s[i];
  }

  cout << ansnum << " " << anslen << endl;
}