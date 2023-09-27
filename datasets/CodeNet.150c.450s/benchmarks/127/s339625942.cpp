#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin >> n;
  string str,str2;

  for(int u=0;u<n;u++) {


  cin >> str;

  set <string> S;
  S.clear();

  int count = 0;
  string stra ,strb ,strt;

  for(int i=1;i<str.size();i++){
    stra = str.substr(0,i);
    strb =  str.substr(i);    
    //  cout << stra << "+" << strb << endl;

    for(int j=0;j<2;j++) {
      for(int k=0;k<2;k++) {

	reverse(stra.begin() , stra.end());

	//	cout << stra << "+" << strb << endl;  

	S.insert(stra + strb);

	reverse(strb.begin() , strb.end());

	//	cout << stra << "+" << strb << endl;
	S.insert(stra+strb);

      }
      strt = stra;
      stra = strb;
      strb = strt;
    }

  }
  cout << S.size() << endl;

  }

  return 0;
}