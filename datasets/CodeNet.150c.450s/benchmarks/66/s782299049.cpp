#include <iostream>
#include <vector>
#include <string>
using namespace std;

int N, M;
vector<string> id;
bool locked = true;

bool search(string tmp){
  for(int i = 0; i < id.size(); i++){
    if(id[i] == tmp) return true;
  }
  return false;
}

int main(void){
  string tmp;
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> tmp;
    id.push_back(tmp);
  }
  cin >> M;
  for(int i = 0; i < M; i++){
    cin >> tmp;
    if(search(tmp)){
      if(locked){
        cout << "Opened by " << tmp << endl;
        locked = false;
      }else{
        cout << "Closed by " << tmp << endl;
        locked = true;
      }
    }else{
      cout << "Unknown " << tmp << endl;
    }
  }
  return 0;
}