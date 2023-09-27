#include<iostream>
#include<string>
using namespace std;

int main(){
  string s,p;
  char tmp;
  int p_len;
  cin >> s >> p;
  s += s;
  int loc = s.find(p);
  if(loc != string::npos){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}