#include <iostream>
#include <set>
using namespace std;

int main(){
  multiset<int> m;
  int a;
  for(int i=0; i<10; i++){
    cin >> a;
    m.insert(a);
  }

  multiset<int>::reverse_iterator it = m.rbegin();
  for(int i=0; i<3; i++)
    cout << *it++ << endl;

  return 0;
}