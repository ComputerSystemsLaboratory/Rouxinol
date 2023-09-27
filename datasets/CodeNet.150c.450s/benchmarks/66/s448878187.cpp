#include <bits/stdc++.h>
using namespace std;

bool isRegistered(string id, vector<string>::iterator registered_id_begin, vector<string>::iterator registered_id_end){

  for(vector<string>::iterator i = registered_id_begin; i != registered_id_end; i++){
    if(id == *i)
      return true;
  }
  return false;
}

int main(void){
  int N;
  cin >> N;
  vector<string> registered_id;
  for(int i=0; i < N; i++){
    string tmp; cin >> tmp;
    registered_id.push_back(tmp);
  }
  int M;
  cin >> M;
  vector<string> touched_id;
  for(int i=0; i < M; i++){
    string tmp; cin >> tmp;
    touched_id.push_back(tmp);
  }

  bool locked = true;
  for(int i=0; i < M; i++){
    if(isRegistered(touched_id[i], registered_id.begin(), registered_id.end())){
      if(locked){
	cout << "Opened by " << touched_id[i] << endl;
	locked = false;
      }else{
	cout << "Closed by " << touched_id[i] << endl;
	locked = true;
      }
    }else{
      cout << "Unknown " << touched_id[i] << endl;
    }
  }
  return 0;
}