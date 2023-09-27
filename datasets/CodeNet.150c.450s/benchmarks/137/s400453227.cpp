#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>

using namespace std;


int main(){
  ios::sync_with_stdio(false);
  int N; 
  cin >> N;
  set<string> dict;

  for(int i=0; i<N; ++i){
    string command;
    string val;
    
    cin >> command; 
    cin >> val;

    if(command[0] == 'i'){
      //insert 
      dict.insert(val);
    }
    else{
      //find
      if(dict.find(val) != dict.end()){
	cout << "yes" << endl;
      }
      else{
	cout << "no" << endl;
      }
    }
  }
    

  return 0;
}