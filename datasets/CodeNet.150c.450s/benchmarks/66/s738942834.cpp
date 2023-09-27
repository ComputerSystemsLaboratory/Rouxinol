#include<bits/stdc++.h>
using namespace std;

int main(){
  int N,M;
  bool f = false;
  vector<string> s;

  cin >> N;

  s.resize(N);

  string work;
  for(int i=0;i<N;++i){
    cin >> work;
    s.emplace_back(work);
  }

  cin >> M;
  
  for(int ix=0;ix<M;++ix){
    cin >> work;

    for(int i=0;i<s.size();++i){
      if(s[i] == work){
	f = !f;
	if(f){
	  cout << "Opened by " << work << endl;
	}else{
	  cout << "Closed by " << work << endl;
	}
	break;
      }
      if(i == s.size() - 1){
	cout << "Unknown " << work << endl;
      }
    }
  }
  
  return 0;
}

