#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
  map< string, int > m;
  string tmp;
  string max_len = "";

  while(cin >> tmp){
    m[tmp] += 1;
    if(max_len.length() < tmp.length()) max_len = tmp;
  }

  map< string, int >::iterator it, it_max_fre = m.begin();
  for(it = m.begin(); it != m.end(); it++){
    if(it_max_fre->second < it->second) it_max_fre = it;
  }

  cout << it_max_fre->first << " " << max_len << endl;
}