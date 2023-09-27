#include <iostream>
#include <vector>
using namespace std;
int main(){
  int n;
  cin >> n;
  int ac=0;
  int wa=0;
  int tle=0;
  int re=0;
  vector<string> v(n);
  for(int i=0;i<n;i++) cin >> v[i];
  for(int i=0;i<n;i++){
    if(v[i]=="AC") ac++;
    else if(v[i]=="WA") wa++;
    else if(v[i]=="TLE") tle++;
    else re++;
  }
  cout << "AC x " << ac << "\n" << "WA x " << wa <<  "\n" << "TLE x " << tle << "\n" << "RE x " << re << "\n";
  return 0;
}