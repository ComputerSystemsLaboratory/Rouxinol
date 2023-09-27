#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

struct lake{
  int index;
  int size;
  lake(int index, int size){
    this->index=index;
    this->size=size;
  }
};

int main(){
  string s; cin >> s;
  stack<int> index;
  stack<lake> l;
  for(int i=0; i<s.length(); i++){
    if(s[i]=='\\') index.push(i);
    else if(s[i]=='/'){
      if(index.empty()) continue;
      int frontIndex=index.top();
      index.pop();

      lake nlake(frontIndex, i-frontIndex);

      while(!l.empty()){
        if(l.top().index>nlake.index){
          nlake.size += l.top().size;
          l.pop();
        }
        else break;
      }

      l.push(nlake);
    }
  }

  vector<int> result;
  int allSize=0;
  while(!l.empty()){
    lake now=l.top(); l.pop();
    result.push_back(now.size);
    allSize += now.size;
  }

  cout << allSize << endl << result.size();
  if(result.size()!=0) cout << " ";
  for(int i=(int)result.size()-1; i>=0; i--){
    cout << result[i];
    if(i!=0) cout << " ";
  }
  cout << endl;

  return 0;
}

