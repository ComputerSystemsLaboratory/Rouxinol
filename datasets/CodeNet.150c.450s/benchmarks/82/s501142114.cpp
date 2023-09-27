#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

namespace {

// Array to store the answers
static int a[24] = {-1};

class Dice {
 public:
  Dice(const int* face) { copy(face, face + 6, face_); }

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
  int front() const { return face_[1]; }
  int right() const { return face_[2]; }

 private:
  int face_[6];
};

struct PairHash {
  size_t operator()(const pair<int, int>& p) const {
    return (static_cast<size_t>(p.first) << 32) | p.second;
  }
};

void Walk(Dice& d,
          const std::string& ops,
          const unordered_map<pair<int, int>, int, PairHash>& m) {
  pair<int, int> p;
  for (auto op : ops) {
    if (!op)
      continue;
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
      default:
        fprintf(stderr, "ERROR: unsupported: [0x%x]\n", op);
        break;
    }
    p.first = d.top();
    p.second = d.front();
    auto it = m.find(p);
    if (it != m.end()) {
      a[it->second] = d.right();
    }
  }
}

}  // namespace

int main() {
  int face[6];
  int q;
  for (int i = 0; i < 6; ++i) {
    cin >> face[i];
  }
  cin >> q;
  const char ops[] = {'W', 'E', 'N', 'S'};

  unordered_map<pair<int, int>, int, PairHash> m;

  for (int i = 0; i < q; ++i) {
    pair<int, int> p;
    cin >> p.first >> p.second;
    m[p] = i;  // index to a
  }

  unordered_set<string> cache;
  char buf[5];
  for (auto op1 : ops) {
    for (auto op2 : ops) {
      for (auto op3 : ops) {
        for (auto op4 : ops) {
          for (auto op5 : ops) {
            snprintf(buf, sizeof(buf), "%c%c%c%c%c", op1, op2, op3, op4, op5);
            const string key(buf, 5);
            auto it = cache.find(key);
            if (it != cache.end())
              continue;

            Dice d(face);
            Walk(d, key, m);
            cache.insert(key);
          }
        }
      }
    }
  }

  for (int i = 0; i < q; ++i)
    cout << a[i] << endl;

  return 0;
}