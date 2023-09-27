#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

class STRING : public string {
public:
  STRING() {}
  STRING(const string& rstr) { assign(rstr); }
  STRING& MakeUpper() {
    for (int iPos = 0; iPos < size(); iPos++) {
      at(iPos) = toupper(at(iPos));
    }
    return *this;
  }
  STRING& MakeLower() {
    for (int iPos = 0; iPos < size(); iPos++) {
      at(iPos) = tolower(at(iPos));
    }
    return *this;
  }
};

int main(void)
{
  int i,k,m;
  STRING w,s[1001];

  cin >> w;
  w = w.MakeUpper();

  k = 0;
  do{
    k = k + 1; 
    cin >> s[k];
  }while(s[k] != "END_OF_TEXT");

  m = 0;
  for(i = 1; i <= k; i++){
    if(s[i].MakeUpper() == w)
      m = m + 1;
  }

  cout << m << endl;

  return 0;
}