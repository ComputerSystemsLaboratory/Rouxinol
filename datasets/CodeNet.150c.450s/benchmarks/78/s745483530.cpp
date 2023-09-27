#include <iostream>
#include <vector>

using namespace std;

int m;
int f(int n) { return n*(n+1)*(n+2)/6; }
vector<int> l1, l2;

void r(int n, int step, vector<int> &l, int p) {
  if(step+1 >= m) return;
 
  for(int i=p; i>=0; i--) {
    int n2 = n-l[i];
    if(n2<0) continue;
    if(n2==0) {
      m = step+1;
      return;
    }
    if(n2>0) {
      r(n2, step+1, l, i);
    }
  }
  
}

int main() {
  while(1) {
    vector<int> l1, l2;
    int n;

     cin >> n;
     if(n==0) break;
    
    // not over
    for(int i=1; true; i++) {
      int mm = f(i);
      if(mm>n) break;
      l1.push_back(mm);
      if(mm&1) l2.push_back(mm);
    }

    m = n;
    r(n, 0, l1, l1.size()-1);
    cout << m;

    cout << ' ';
    
    m = n;
    r(n, 0, l2, l2.size()-1);
    cout << m;

    cout << "\n";

    
  }
  return 0;
}