#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i=0; i<n; i++) cin >> v[i];
  for(int i=n-1; i>=0; i--){
    if(i != n-1) cout << " ";
    cout << v[i];
  }
  cout << endl;
  return 0;
}