#include <bits/stdc++.h>

using namespace std;

int main(){

  int N,M;
  string scan;
  vector<string> ID;
  bool door=false;
  bool flag=false;

  cin >> N;

  for(int i=0; i<N; ++i){
    cin >> scan;
    ID.emplace_back(scan);
  }

  cin >> M;

  for(int i=0; i<M; ++i){
    cin >> scan;

    for(int k=0; k<ID.size(); ++k){
      if(ID[k]==scan){
	flag=true;
      }
    }

    if(flag){
      if(door){
	door=false;
	cout << "Closed by " << scan << endl;
      }else{
	door=true;
	cout << "Opened by " << scan << endl;
      }
    }else{
      cout << "Unknown " << scan << endl;
    }

    flag=false;
  }

  
  return 0;
}
