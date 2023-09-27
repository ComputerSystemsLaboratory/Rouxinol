#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <unordered_map>

using namespace std;

namespace {

typedef int (*Op)(int, int);

class Stack {
 public:
  Stack() : size_(100), ptr_(0) {
    s_ = new int[size_];
  }

  ~Stack() {
    delete[] s_;
  }

  bool Empty() const {
    return ptr_ == 0;
  }

  bool IsFull() const {
    return ptr_ >= size_;
  }

  pair<int, bool> Pop() {
    if (Empty()) {
      return make_pair(0, false);
    }
    const int r = s_[--ptr_];
    return make_pair(r, true);
  }

  bool Push(int n) {
    if (IsFull()) {
      return false;
    }

    s_[ptr_] = n;
    ptr_++;
    return true;
  }

 private:
  int size_;
  int ptr_;
  int* s_;
};

void Parse(const unordered_map<char, Op>& m,
           Stack* stack, const string& s) {
  if (s.size() == 0) {
    return;
  }
  const auto it = m.find(s[0]);
  if (it == m.end()) {
    stack->Push(atoi(s.c_str()));
    return;
  }

  const pair<int, bool> a = stack->Pop();
  if (!a.second) {
    return;
  }
  const pair<int, bool> b = stack->Pop();
  if (!b.second) {
    return;
  }
  stack->Push(it->second(b.first, a.first));
}
} // namespace

int main() {
  string line;
  getline(cin, line);
  Stack stack;

  unordered_map<char, Op> ops = {
    {'+', [](int a, int b) { return a + b; }},
    {'-', [](int a, int b) { return a - b; }},
    {'*', [](int a, int b) { return a * b; }},
  };

  size_t begin = 0;
  for (;;) {
    const size_t end = line.find_first_of(" ", begin);
    if (end == string::npos) {
      Parse(ops, &stack, line.substr(begin));
      break;
    }
    Parse(ops, &stack, line.substr(begin, end-begin));
    begin = end + 1;
  }
  cout << stack.Pop().first << endl;
  return 0;
}