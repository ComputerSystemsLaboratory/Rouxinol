#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

class Die {
public:
  Die(vector<int> numbers) {
    vertical_ = vector<int>(4);
    horizontal_ = vector<int>(4);
    vertical_[0] = numbers[0];
    vertical_[1] = numbers[4];
    vertical_[2] = numbers[5];
    vertical_[3] = numbers[1];
    horizontal_[0] = numbers[0];
    horizontal_[1] = numbers[2];
    horizontal_[2] = numbers[5];
    horizontal_[3] = numbers[3];
  }

  int get_top() const { return vertical_[0]; }
  int get_right() const { return horizontal_[1]; }
  int get_front() const { return vertical_[3]; }
  void rotate_north()
  {
    rotate(vertical_.rbegin(), vertical_.rbegin() + 1, vertical_.rend());
    update(vertical_, horizontal_);
  }
  void rotate_south()
  {
    rotate(vertical_.begin(), vertical_.begin() + 1, vertical_.end());
    update(vertical_, horizontal_);
  }
  void rotate_east()
  {
    rotate(horizontal_.rbegin(), horizontal_.rbegin() + 1, horizontal_.rend());
    update(horizontal_, vertical_);
  }
  void rotate_west()
  {
    rotate(horizontal_.begin(), horizontal_.begin() + 1, horizontal_.end());
    update(horizontal_, vertical_);
  }

  int find_right(int top, int front)
  {
    if (find(horizontal_.begin(), horizontal_.end(), front) != horizontal_.end()) {
      while (get_top() != front) {
        rotate_east();
      }
      rotate_south();
    }
    else {
      while (get_front() != front) {
        rotate_north();
      }
    }

    while (get_top() != top) {
      rotate_east();
    }
    return get_right();
  }

private:
  int top_;
  vector<int> vertical_, horizontal_;

  void update(vector<int>& from, vector<int>& to)
  {
    to[0] = from[0]; to[2] = from[2];
  }

};

int main()
{
  vector<int> digits(6);
  for (int i = 0; i < 6; ++i) {
    fscanf(stdin, "%d", &digits[i]);
  }
  Die die(digits);
  int q;
  fscanf(stdin, "%d", &q);
  for (int i = 0; i < q; ++i) {
    int top, front;
    fscanf(stdin, "%d %d", &top, &front);
    int right = die.find_right(top, front);
    fprintf(stdout, "%d\n", right);
  }
  return 0;
}