#include <iostream>
#include <cmath>
#include <vector>
#include <map>

using namespace std;

int main(){
  vector<string> tmpwords;
  map<string, int> words;
  string tmp;
  while(cin >> tmp){

    auto itr = words.find(tmp);
    if(itr!=words.end()){
      words[tmp]++;
    }
    else{
      words.insert( map<string, int>::value_type(tmp, 1));
      // cout << tmp << endl;
    }

  }

  // cout << "here" << endl;
  
  int max=0;
  string maxStr;
  int frequence=0;
  string freStr;
  for(auto itr=words.begin();itr != words.end(); ++itr){
    if(max < (itr->first.size())){
      max = (itr->first.size());
      maxStr = itr->first;
    }
    if(frequence < (itr->second)){
      frequence = itr->second;
      freStr = itr->first;
    }
  }

  cout << freStr << " " << maxStr << endl;
  
}