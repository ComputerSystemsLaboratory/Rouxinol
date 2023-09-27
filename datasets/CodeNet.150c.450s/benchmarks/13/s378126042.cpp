#include<iostream>
#include<string>

using namespace std;

int main(){
  string str;
  string lstr;

  string astr;

  cin >> str >> astr;

  lstr = str + str;

  if(lstr.find(astr)!=string::npos)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}