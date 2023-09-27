#include <iostream>
using namespace std;

int main()
{
  string buf, pat;
  cin >> buf >> pat;

  buf = buf + buf;
  if( buf.find( pat ) != string::npos ){
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }

  return 0;
}