#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
  multiset<string> words;
  string wmuch,wlong,w;
  int msize = 0,mcount=0;
  while(cin>>w){
    words.insert(w);
    if (mcount<words.count(w)){
      mcount = words.count(w);
      wmuch = w;
    }
    if (msize<w.size()){
      msize = w.size();
      wlong = w;
    }
  }
  cout << wmuch << " " << wlong << endl;
  return 0;
}