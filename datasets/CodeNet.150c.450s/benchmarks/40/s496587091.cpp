#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

class Die {
public:
  Die(vector<int> numbers) : top_(1) {
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

  int get_top() const { return top_; }
  void rotate_north()
  {
    rotate(vertical_.rbegin(), vertical_.rbegin() + 1, vertical_.rend());
    top_ = vertical_[0];
    horizontal_[0] = vertical_[0];
    horizontal_[2] = vertical_[2];
  }
  void rotate_south()
  {
    rotate(vertical_.begin(), vertical_.begin() + 1, vertical_.end());
    top_ = vertical_[0];
    horizontal_[0] = vertical_[0];
    horizontal_[2] = vertical_[2];
  }
  void rotate_east()
  {
    rotate(horizontal_.rbegin(), horizontal_.rbegin() + 1, horizontal_.rend());
    top_ = horizontal_[0];
    vertical_[0] = horizontal_[0];
    vertical_[2] = horizontal_[2];
  }
  void rotate_west()
  {
    rotate(horizontal_.begin(), horizontal_.begin() + 1, horizontal_.end());
    top_ = horizontal_[0];
    vertical_[0] = horizontal_[0];
    vertical_[2] = horizontal_[2];
  }

private:
  int top_;
  vector<int> vertical_, horizontal_;
};

int main()
{
  vector<int> nums(6);
  for (int i = 0; i < 6; ++i) {
    fscanf(stdin, "%d", &nums[i]);
  }
  string commands;
  cin >> commands;
  Die die(nums);
  int ncomms = commands.size();
  for (int i = 0; i < ncomms; ++i) {
    if (commands[i] == 'N') {
      die.rotate_north();
    }
    else if (commands[i] == 'S') {
      die.rotate_south();
    }
    else if (commands[i] == 'E') {
      die.rotate_east();
    }
    else if (commands[i] == 'W') {
      die.rotate_west();
    }
  }
  fprintf(stdout, "%d\n", die.get_top());
  return 0;
}