#include <iostream>
using namespace std;

int main() {
  int width, height;
  int area, track_length;
  cin >> height >> width;

  area = width * height;
  track_length= (width + height) * 2;

  cout << area << " " << track_length << endl;

  return 0;
}