#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
  while (true) {
    string in; cin >> in;
    if (in == "0") break;
    int s = 0;
    for (string::iterator itr = in.begin();
	 itr != in.end(); itr++) {
      char c = *itr;
      int c_i = c + (0 - '0');
      s += c_i;
    }
    cout << s << endl;
  }
  return 0;
}