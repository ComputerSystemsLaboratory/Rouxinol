#include <iostream>
#include <string>
#include <map>
#include <set>
 
using namespace std;
 
set<string> dic;
map<string,int> times;
 
int main(){
  int msize = 0;
  string str;
  string a,b;
  while(!cin.eof()){
    string in; cin >> in;
    dic.insert(in);
    times[in]++;
    if(msize < in.size()){
      str = in;
      msize = str.size();
    }
  }
  a = str;
  int mfreq = 0;
  for(set<string>::iterator it = dic.begin(); it != dic.end(); ++it){
    if(mfreq < times[*it]){
      mfreq = times[*it];
      str = *it;
    }
  }
  b = str;
  cout << b << " " << a << endl;
 
  return 0;
}