#include <algorithm>
#include <iostream>

using namespace std;

namespace {

class Dice {
 private:
  enum Face {
    TOP,     // 1
    FRONT,   // 2
    RIGHT,   // 3
    LEFT,    // 4
    BACK,    // 5
    BOTTOM,  // 6
  };

 public:
  Dice(const int* face) { copy(face, face + 6, face_); }

  void west() { rotate(TOP, RIGHT, BOTTOM, LEFT); }

  void east() { rotate(TOP, LEFT, BOTTOM, RIGHT); }

  void north() { rotate(TOP, FRONT, BOTTOM, BACK); }

  void south() { rotate(TOP, BACK, BOTTOM, FRONT); }

  int top() const { return face_[TOP]; }

 private:
  void rotate(Face f1, Face f2, Face f3, Face f4) {
    const int t = face_[f1];
    face_[f1] = face_[f2];
    face_[f2] = face_[f3];
    face_[f3] = face_[f4];
    face_[f4] = t;
  }

  int face_[6];
};

}  // namespace

int main() {
  string ops;
  int face[6];
  for (int i = 0; i < 6; ++i) {
    cin >> face[i];
  }
  cin >> ops;

  Dice d(face);
  for (auto op : ops) {
    switch (op) {
      case 'W':
        d.west();
        break;
      case 'E':
        d.east();
        break;
      case 'N':
        d.north();
        break;
      case 'S':
        d.south();
        break;
    }
  }
  cout << d.top() << endl;

  return 0;
}