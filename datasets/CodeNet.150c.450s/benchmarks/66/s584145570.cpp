#include<iostream>
#include<string>
using namespace std;
int main(){
  int N,M,d;
  bool c=true;
  string s,list[256];

  cin >> N;
  for(int i=0;i<N;i++){
    cin >> list[i];
  }
  cin >> M;
  for(int i=0;i<M;i++){
    d = 0;
    cin >> s;
    for(int j=0;j<N;j++){
      if(list[j]==s){
	if(c == true){
	  c = false;
	  d = 1;
	  cout << "Opened by " << s << endl;
	}else{
	  c = true;
	  d = 1;
	  cout << "Closed by " << s << endl;
	}
      }
    }
    if(d==0){
      cout << "Unknown " << s <<endl;
    }
  }
}