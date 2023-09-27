#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#define MSI map<string,int>
#define MIS map<int,string,greater<int> >
using namespace std;
int main()
{
  string word;
  MSI msi;
  MIS mis;
  while(cin >> word){
    msi[word]++;
    mis[word.length()] = word;
  }
  int arise = 0;
  for(MSI::iterator it = msi.begin(); it != msi.end(); it++){
    if(arise < (*it).second) {
      arise = (*it).second;
      word = (*it).first;
    }
  }
  cout << word << " " << mis.begin()->second << endl;
  return 0;
}