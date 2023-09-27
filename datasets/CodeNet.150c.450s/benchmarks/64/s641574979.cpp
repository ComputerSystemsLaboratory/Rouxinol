#include <iostream>
#include <vector>
using namespace std;

int n,q;
int num;
vector<int> a;

bool can_make_m_from_a(int m,int it) {
  if(m == 0)
    return true;
  else if(m < 0)
    return false;
  else if(it == n)
    return false;
  else
    return (can_make_m_from_a(m-a[it],it+1) || can_make_m_from_a(m,it+1));
}

int main() {
  cin >> n;
  for(int i=0;i<n;i++) {
    cin >> num;
    a.push_back(num);
  }
  cin >> q;
  for(int i=0;i<q;i++) {
    int m;
    cin >> m;
    if(can_make_m_from_a(m,0))
      cout << "yes" << endl;
    else
      cout << "no" << endl;
  }

}