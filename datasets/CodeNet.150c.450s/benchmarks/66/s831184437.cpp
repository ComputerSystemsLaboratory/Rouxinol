#include<iostream>
#include<string>
#include<set>
#include<algorithm>

using namespace std;

int main(){
  int i, n, m;
  string id;
  bool is_open;
  set<string> data;

  cin >> n;
  for(i=0; i<n; ++i){
    cin >> id;
    data.insert(id);
  }

  cin >> m;
  for(i=0, is_open=false; i<m; ++i){
    cin >> id;
    if(data.find(id) != data.end()){
      if(is_open == false){
	cout << "Opened by " << id << endl;
	is_open = true;
      }else{
	cout << "Closed by " << id << endl;
	is_open = false;
      }
    }else{
      cout << "Unknown " << id << endl;
    }
  }

  return 0;
}