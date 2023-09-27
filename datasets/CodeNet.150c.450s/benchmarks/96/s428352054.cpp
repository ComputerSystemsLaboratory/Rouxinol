#include <iostream>
using namespace std;
int main(){
  string keys[] = {
    "",
    ".,!? ",
    "abc",
    "def",
    "ghi",
    "jkl",
    "mno",
    "pqrs",
    "tuv",
    "wxyz",
  };
  int n;
  string s;
  int kind;
  int cur;

  cin >> n;
  for( int lp=0;lp<n;lp++ ){
    cin >> s;

    //    cout << "s=" << s << endl;
    cur=-1;
    for( unsigned int i=0;i<s.length();i++ ){
      //      cout<<"s[i]="<<s[i]<<" cur="<<cur<<" kind="<<kind<<endl;

      if( s[i]=='0' ){
	if( cur>=0 ){
	  cout << keys[ kind][cur%keys[kind].length() ] ;
	  cur=-1;
	}
      }else{
	if( cur<0 ){
	  kind = s[i] - '0';
	  cur=0;
	}else
	  cur++;
      }
    }
    cout << endl;

    //    break;
  }

  return 0;
}