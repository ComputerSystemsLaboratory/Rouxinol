#include<iostream>
#include<set>

using namespace std;

int main() {
  int n;
  multiset<int> mySet;
  for(int i=1; i<501; i++) {
    int val = i;
    for(int j=i+1; j<501 && val<1001; j++) {
      val += j;
      mySet.insert(val);
    }
  }
  while(cin>>n && n) {
    cout<<mySet.count(n)<<endl;
  }
}