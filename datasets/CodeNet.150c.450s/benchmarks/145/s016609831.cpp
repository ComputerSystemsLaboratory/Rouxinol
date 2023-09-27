#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  map<string, int> word;
  string str;
  string lon = "", w = "";
  int cmax = 0;

  while (cin >> str){
    if (str.size() > lon.size()){
      lon = str;
    }
    word[str]++;
  }

  map<string, int>::iterator it = word.begin();
  
  while (it != word.end()){
    if (cmax < (*it).second){
      cmax = (*it).second;
      w = (*it).first;
    }

    
    ++it;
  }

  cout << w << ' ' << lon << endl;

  return (0);
}