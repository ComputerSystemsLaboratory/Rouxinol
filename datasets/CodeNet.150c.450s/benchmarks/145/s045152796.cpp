#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

  std::vector<string> word;
  std::vector<int> count;
  string now;
  int num=0,most=0;
  bool aaa;

  while(cin >> now){
    aaa = true;
    for(int i=0;i<num;i++)
      if(word[i] == now){
	count[i]++;
	aaa = false;
      }

    if(aaa){
      word.push_back(now);
      count.push_back(1);
      num = word.size();
    }
  }

  now = " ";

  for(int i=0,mmm=0,nnn=0;i<num;i++){
    if(mmm < count[i]){
      mmm = count[i];
      most = i;
    }
    if(now.size() < word[i].size()){
      now = word[i];
    }
  }

  cout << word[most] << ' ' << now << endl;

  return 0;
}