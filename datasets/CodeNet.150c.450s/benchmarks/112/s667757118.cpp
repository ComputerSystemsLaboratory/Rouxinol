#include <iostream>
#include <map>

using namespace std;

int main(int argc, char const* argv[])
{
  int table_size;
  while(cin >> table_size) {
    if (table_size == 0) break;

    map<char, char> table; 
    char key, val;
    for (int i = 0; i < table_size; i++) {
      cin >> key >> val;
      table.insert( map<char, char>::value_type( key, val ) );
    }

    int input_size;
    cin >> input_size;

    char c;
    for (int i = 0; i < input_size; i++) {
      cin >> c;
      if (table.find(c) == table.end()) {
        cout << c;
      } else {
        cout << table[c];
      }
    }

    cout << endl;
  }
  return 0;
}