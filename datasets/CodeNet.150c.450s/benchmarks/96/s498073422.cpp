#include<iostream>
#include<cstring>

using namespace std;

string outputWord(string str);

int main() {
  int n;
  string tmp;
  cin>>n;
  getline(cin, tmp);
  while(n--) {
    string inputStr;
    getline(cin, inputStr);    
    cout<<outputWord(inputStr)<<endl;
  }
}

string outputWord(string str) {
  string ans, tmp;

  for(int i=0; i<str.length(); i++) {
    switch(str[i]) {
    case '0':
      ans += tmp;
      tmp.clear();
      break;
    case '1':
      if(tmp.length()==0 || tmp==" ") {
	tmp = ".";
      }
      else if(tmp == ".") {
	tmp = ",";
      }
      else if(tmp == ",") {
	tmp = "!";
      }
      else if(tmp == "!") {
	tmp = "?";
      }
      else if(tmp == "?") {
	tmp = " ";
      }
      break;
    case '2':
      if(tmp.length()==0 || tmp=="c") {
	tmp = "a";
      }
      else if(tmp == "a") {
	tmp = "b";
      }
      else if(tmp == "b") {
	tmp = "c";
      }
      break;
    case '3':
      if(tmp.length()==0 || tmp=="f") {
	tmp = "d";
      }
      else if(tmp == "d") {
	tmp = "e";
      }
      else if(tmp == "e") {
	tmp = "f";
      }
      break;
    case '4':
      if(tmp.length()==0 || tmp=="i") {
	tmp = "g";
      }
      else if(tmp == "g") {
	tmp = "h";
      }
      else if(tmp == "h") {
	tmp = "i";
      }
      break;
    case '5':
      if(tmp.length()==0 || tmp=="l") {
	tmp = "j";
      }
      else if(tmp == "j") {
	tmp = "k";
      }
      else if(tmp == "k") {
	tmp = "l";
      }
      break;
    case '6':
      if(tmp.length()==0 || tmp=="o") {
	tmp = "m";
      }
      else if(tmp == "m") {
	tmp = "n";
      }
      else if(tmp == "n") {
	tmp = "o";
      }
      break;
    case '7':
      if(tmp.length()==0 || tmp=="s") {
	tmp = "p";
      }
      else if(tmp == "p") {
	tmp = "q";
      }
      else if(tmp == "q") {
	tmp = "r";
      }
      else if(tmp == "r") {
	tmp = "s";
      }
      break;
    case '8':
      if(tmp.length()==0 || tmp=="v") {
	tmp = "t";
      }
      else if(tmp == "t") {
	tmp = "u";
      }
      else if(tmp == "u") {
	tmp = "v";
      }
      break;
    case '9':
      if(tmp.length()==0 || tmp=="z") {
	tmp = "w";
      }
      else if(tmp == "w") {
	tmp = "x";
      }
      else if(tmp == "x") {
	tmp = "y";
      }
      else if(tmp == "y") {
	tmp = "z";
      }
      break;
    }
  }

  return ans;
}