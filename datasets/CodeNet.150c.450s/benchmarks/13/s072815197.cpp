#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
  string ring, word;
  cin >> ring >> word;
  ring += ring;

  if (ring.find(word) != string::npos) {
    cout << "Yes" << endl;
    return 0;
  }

  cout << "No" << endl;
  return 0;
}