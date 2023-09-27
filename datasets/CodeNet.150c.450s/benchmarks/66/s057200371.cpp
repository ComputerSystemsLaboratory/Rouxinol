#include<iostream>
#include<map>
using namespace std;

int main(){
  int n,m;
  string s;
  map<string,bool> id;
  bool open = false;

  cin >> n;
  for(int i=0;i<n;i++){
    cin >> s;
    id[s] = true;
  }

  cin >> m;
  for(int i=0;i<m;i++){
    cin >> s;
    if(id[s]){
      if(open)cout << "Closed by " << s << endl;
      else cout << "Opened by " << s << endl;
      open = !open;
    }else{
      cout << "Unknown " << s << endl;
    }
  }
}