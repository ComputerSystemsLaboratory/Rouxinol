#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  unsigned tmp;
  vector<unsigned> height;
  for ( unsigned i = 0; i < 10; i++ )
    {
      cin >> tmp;
      height.push_back( tmp );
    }
  sort( height.begin(), height.end(), greater<unsigned>() );
  for ( unsigned i = 0; i < 3; i++ )
    {
      cout << height[ i ] << endl;
    }
  return 0;
}