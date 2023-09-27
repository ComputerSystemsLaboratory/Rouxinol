#include<iostream>
#include<set>
#include<string>
using namespace std;

int main(){
  int k;
  cin >> k;
  typedef set<string> set_t;
  set_t A;
  for(int i = 0;i < k; i++){
    string command;
    string word;
    cin >> command >> word;
    if(command == "insert"){
      A.insert(word);
    }else if(command == "find"){
      if(A.count(word)>0){
	cout << "yes" << endl;
      }else{
	cout << "no" <<endl;
      }
    }
  }
}