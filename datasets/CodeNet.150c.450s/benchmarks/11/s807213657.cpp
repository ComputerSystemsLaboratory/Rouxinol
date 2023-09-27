#include <iostream>
using namespace std;

int to_i(string s){
  if(s=="S")return 0;
  if(s=="H") return 1;
  if(s=="C") return 2;
  if(s=="D") return 3;
}

string to_s(int x){
  string s[4] = {"S","H","C","D"};
  switch(x){
  case 0:
    return s[0];
  case 1:
    return s[1];
  case 2:
    return s[2];
  case 3:
    return s[3];
  }
}


int main(){

  int n; cin >> n;
  int card[4][13]={};
  for(int i=0; i<n; i++){
    string s;
    int t;
    cin >> s >> t;
    card[to_i(s)][t-1] = 1;
  }
  for(int i=0; i<4; i++){
    for(int j=0; j<13; j++){
      if(card[i][j] == 0)
	cout << to_s(i) << " " << j+1 << endl;
    }
  }
}