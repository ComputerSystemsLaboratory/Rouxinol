#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> a,b;

  int s,t;

  int temp;


  for(int i=0;i<4;i++) {

    cin >> temp;

    a.push_back(temp);

  }

  for(int i=0;i<4;i++) {

    cin >> temp;

    b.push_back(temp);

  }

  s=t=0;

  for(int i=0;i<4;i++) {

    s+=a[i];
    t+=b[i];

  }

  if(s>t) cout << s << endl;

  else cout << t << endl;

  return 0;

}