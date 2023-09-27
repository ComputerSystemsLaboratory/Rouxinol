#include<iostream>
#include<cstdio>
#include<string>
#include<map>
using namespace std;
int main(){
  map<string,int> t;
  string s, mxc, mxl;
  int freq = 1, len = 0;
  while(cin >> s){
    if(t.find(s) == t.end()){
      t[s] = 1;
    }
    else{
      t[s]++;
    }

    if(t[s] > freq){
      freq = t[s];
      mxc = s;
    }
    if(s.size() > len){
      len = s.size();
      mxl = s;
    }
  }
  cout << mxc << " " << mxl << endl;
}