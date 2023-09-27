#include <string>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int m;
  cin >> m;
  int sum[m];

  for(int i=0;i<m;i++){

    string A,l,r;
    set<string> a;
    cin >> A;
    for(int j=1;j<A.size();j++){
      for(int k=0;k<2;k++) {
	l=A.substr(0,j);
	r=A.substr(j);

	if(k==1)swap(l,r);

	a.insert(l+r);
	reverse(l.begin(), l.end());
	a.insert(l+r);
	reverse(r.begin(), r.end());
	a.insert(l+r);
	reverse(l.begin(), l.end());
	a.insert(l+r);
      }
    }
    sum[i] = a.size();
  }
  for(int i=0;i<m;i++)
    cout << sum[i] << endl;
  return 0;
}