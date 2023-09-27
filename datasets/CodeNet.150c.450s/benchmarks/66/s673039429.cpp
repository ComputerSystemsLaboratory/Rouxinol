#include <iostream>
#include <string>
#include <cstdlib>
#include <set>

using namespace std;

int main() {
  int n, m;
  set<string> admin;
  cin >> n;
  for( int i = 0; i < n; i++ ) {
    string tmp;
    cin >> tmp;
    admin.insert( tmp );
  }
  cin >> m;
  bool door = false; // closed
  for( int i = 0; i < m; i++ ) {
    string tmp;
    cin >> tmp;
    if( admin.find( tmp ) == admin.end() ) {
      cout << "Unknown ";
    }else if( !door ){
      cout << "Opened by ";
      door = !door;
    }else{
      cout << "Closed by ";
      door = !door;
    }
    cout << tmp << endl;
  }

  return EXIT_SUCCESS;
}