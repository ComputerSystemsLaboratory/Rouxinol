#include<iostream>
#include<set>
using namespace std;

int main() {

  set<int> s;
  for(int i=1; i<=30; i++)
    s.insert(i);

  int d;
  for(int i=0; i<28; i++) {
    cin>>d;
    s.erase(s.find(d));
  }

  set<int>::iterator it = s.begin();
  for(;it!=s.end();++it)
    cout<<(*it)<<endl;

}