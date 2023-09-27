#include <iostream>

using namespace std;

int main(int argc, char** argv){
  int h, m, s, input;
  cin >> input;
  h = input/3600;
  input = input%3600;
  m = input / 60;
  s = input % 60;
  cout << h << ":" << m << ":" << s << endl;
  return 0;
}