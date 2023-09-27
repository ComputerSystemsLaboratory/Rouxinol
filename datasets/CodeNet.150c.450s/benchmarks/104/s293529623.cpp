#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> a;
  int w,n,s1,s2;
  char c;
  cin >> w >> n;
  for(int i=1;i<=w;i++)a.push_back(i);
  for(int i=0;i<n;i++){
	cin >> s1 >> c >> s2;
	swap(a[s1-1],a[s2-1]);
  }
  for(auto i:a)cout << i << endl;
  return 0;
}