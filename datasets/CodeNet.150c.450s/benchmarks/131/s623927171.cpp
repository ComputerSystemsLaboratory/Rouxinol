#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <algorithm>

using namespace std;

string ItoS(int num){
  stringstream ss;
  ss << num;
  return ss.str();
}

int main(){
  unsigned int a0;
  unsigned int L;
  
  while(cin >> a0 >> L, a0 || L){
    vector<string> a;
    a.push_back(ItoS(a0));
    bool eq = false;
    for(int i=0; 1; i++){
      int keta = 0;
      if(a[i].length() != L){
	keta = L-a[i].length();
      }
      string smin = a[i];
      string smax = a[i];
      sort(smin.begin(), smin.end());
      sort(smax.begin(), smax.end(), greater<char>());
      for(int j=0; j<keta; j++){
	smax.push_back('0');
      }
      int min = atoi(smin.c_str());
      int max = atoi(smax.c_str());
      int sa = max - min;
      for(int j=0; j<i+1; j++){
	if(ItoS(sa) == a[j]){
	  cout << j << " " << a[j] << " " << i+1-j << endl;
	  eq = true;
	  break;
	}
      }
      if(eq){
	break;
      }
      a.push_back(ItoS(sa));
    }
  }
  return 0;
}