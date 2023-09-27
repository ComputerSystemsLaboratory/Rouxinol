#include <algorithm>
#include <iostream>

using namespace std;

namespace {

class Dice {
 public:
  Dice(const int* face) {
    copy(face, face + 6, face_);
  }

  void west() {
    const int t = face_[0];
    const int t2 = face_[3];
    face_[0] = face_[2];
    face_[2] = face_[5];
    face_[3] = t;
    face_[5] = t2;
  }

  void east() {
    const int t = face_[0];
    const int t2 = face_[2];
    face_[0] = face_[3];
    face_[2] = t;
    face_[3] = face_[5];
    face_[5] = t2;
  }

  void north() {
    const int t = face_[0];
    const int t2 = face_[4];
    face_[0] = face_[1];
    face_[1] = face_[5];
    face_[4] = t;
    face_[5] = t2;
  }

  void south() {
    const int t = face_[0];
    const int t2 = face_[1];
    face_[0] = face_[4];
    face_[1] = t;
    face_[4] = face_[5];
    face_[5] = t2;
  }

  int top() const { return face_[0]; }

 private:
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