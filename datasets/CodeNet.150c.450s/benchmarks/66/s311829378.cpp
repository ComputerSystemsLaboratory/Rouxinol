#include<iostream>
#include<vector>

using namespace std;

vector<string> V;

bool find(string in){
  for(int i = 0; i < V.size(); i++)
    if(V[i] == in) return true;

  return false;
}

int main(){
  int n,m;
  

  cin >> n;
  while(n--){
    string in;
    cin >> in;
    V.push_back(in);
  }

  bool open = false;

  cin >> m;
  while(m--){
    string in;
    cin >> in;
    if(find(in)){
      if(open) cout << "Closed by ";
      else cout << "Opened by ";
      open = !open;
    }else cout << "Unknown ";

    cout << in << endl;
  }
  return 0;
}