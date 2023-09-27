#include<iostream>
#include<string>
using namespace std;

string reverce(int,int,string);

int main(){

  string str;
  string command;
  int q;
  int a,b;

  cin >> str;
  cin >> q;

for(int j = 0;j < q;j++){

  cin >> command;

  if(command == "print"){
    cin >> a >> b;
    cout << str.substr(a,b-a+1) << endl;
  }else if(command == "reverse"){
    cin >> a >> b;
    str = reverce(a,b,str);
  }else if(command == "replace"){
    string s;
    cin >> a >> b >> s;
    str.replace(a,b-a+1,s);
  }
}
return 0;
}

string reverce(int a,int b,string s){
  string str = "";
  for(int i = b;i >= a; i--){
  str += s[i];
  }
  s.replace(a,str.size(),str);
  return s;
}