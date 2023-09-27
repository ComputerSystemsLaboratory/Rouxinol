#include <iostream>
#include <set>
using namespace std;


int N,M;

int main(){


  cin >> N;
  bool open = false;
  set<string> ID;       
  for(int i = 0; i < N ; i++){
    string tmp;
    cin >> tmp;
    ID.insert(tmp);
  }

  cin >> M;
  for(int i = 0; i < M ; i++){
    string tmp;  
    cin >> tmp;

    if(ID.count(tmp) == 0){
      cout <<"Unknown " << tmp << endl;
    }
    else{
      if(open){
	open = false;
	cout << "Closed by " << tmp << endl;
      }else{
	open =true;
	cout << "Opened by " << tmp << endl;
      }
    } 
  }
  return 0;
}