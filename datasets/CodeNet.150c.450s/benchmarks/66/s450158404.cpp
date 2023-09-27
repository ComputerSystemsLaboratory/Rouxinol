#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main() {
  int n, m;
  string in;
  cin>>n;
  set<string> t;
  for (int i=0; i<n; ++i) {
    cin>>in; t.insert(in);
  }
  cin>>m;

  bool open = false;
  for (int i=0; i<m; ++i) {
    cin>>in;
    if (t.find(in) == t.end()) {
      cout<<"Unknown "<<in<<endl;
    } else {
      cout<<(open?"Closed":"Opened")<<" by "<<in<<endl;
      open ^= true;
    }
  }
}