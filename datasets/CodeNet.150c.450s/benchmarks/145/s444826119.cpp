#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(void){
  vector<string> res;
  vector<int> rei;
  string maxstr;
  string inp;
  while(cin>>inp){
    if(maxstr.size() < inp.size()){
      maxstr = inp;
    }
    bool used = true;
    for(int i = 0 ; i < res.size() ; i ++){
      if(res[i] == inp){
	rei[i]++;
	used = false;
      }
    }
    if(used){
      res.push_back(inp);
      rei.push_back(1);
    }
  }
  string sizee = "";
  int maxw = 0;
  for(int i = 0 ; i < res.size() ; i ++){
    if(maxw < rei[i]){
      sizee = res[i];
      maxw = rei[i];
    }
  }
  cout<<sizee<<" "<<maxstr<<endl;
  
}