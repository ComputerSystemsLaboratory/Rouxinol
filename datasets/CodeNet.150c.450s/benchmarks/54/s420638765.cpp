#include <iostream>
#include <string>
using namespace std;

int main()
{
  string word, buf;
  cin >> word;
  for( int i = 0; i < word.size(); i++ ) {
    word[ i ] = tolower( word[ i ] );
  }

  int cnt = 0;
  while( true ) {
    cin >> buf;
    if( buf == "END_OF_TEXT" ) {
      break;
    }
    if( buf.size() != word.size() ) {
      continue;
    }
    for( int i = 0; i < buf.size(); i++ ) {
      buf[ i ] = tolower( buf[ i ] );
    }
    if( word == buf ) {
      cnt += 1;
    }
  }
  cout << cnt << endl;

  return 0;
}