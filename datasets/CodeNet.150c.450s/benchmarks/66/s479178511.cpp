#include<bits/stdc++.h>
using namespace std;

typedef map<string,bool> ID;

int main(){
  ID id;
  bool b = true;
  int n,m;
  
  cin >> n;
  for(int i = 0; i < n; i++){
    string str;
    cin >> str;
    id[str] = true;
  }
  
  cin >> m;
  for(int i = 0; i < m; i++){
    string str;
    cin >> str;
    if(id.count(str)){
      cout << (b ? "Opened by " : "Closed by ") ;
      b = !b;
    }else{
      cout << "Unknown ";
    }
    cout << str << endl;
  }
}