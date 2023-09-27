#include<iostream>
using namespace std;

int main(){
  int ja,jb,sa,sb,ra,rb,ea,eb,s,t;
  cin >> ja >> sa >> ra >> ea;
  cin >> jb >> sb >> rb >> eb;

  s=ja+sa+ra+ea;
  t=jb+sb+rb+eb;

  if (s>t) {
    cout << s << endl;
  } else {
    cout << t << endl;
  }

  return 0;
}