#include<iostream>
#include<set>
#include<string>
using namespace std;

set<string> ids;
bool open = false;
int main(){
  int N,M;
  cin >> N;
  for(int i = 0;i < N;i++){
    string str;
    cin >> str;
    ids.insert(str);
  }
  cin >> M;
  for(int i = 0;i < M;i++){
    string str;
    cin >> str;
    if(ids.find(str) == ids.end()){
      cout << "Unknown " << str << endl;
    }
    else{
      if(open){
	cout << "Closed by " << str << endl;
      }
      else{
	cout << "Opened by " << str << endl;
      }
      open = !open;
    }
  }
  return 0;
}