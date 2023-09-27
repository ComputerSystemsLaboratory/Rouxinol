// Mode value

#include <iostream>
#include <algorithm>
#include <vector>

using std::cout;		using std::endl;
using std::cin;			using std::sort;
using std::vector;

int main(void)
{
	int num;
  int counters[101] = {0};
	int max_count = 1;
	vector<int> numbers;

  while (cin >> num) {
    counters[num]++;
  }

  for (int i = 1; i <= 100; i++) {
    if (max_count < counters[i]) {
      if (numbers.empty()) {
        numbers.push_back(i);
      } else {
        numbers.erase(numbers.begin(), numbers.end());
        numbers.push_back(i);
      }
      max_count = counters[i];
    } else if (max_count == counters[i]) {
      numbers.push_back(i);
    }
  }

  sort(numbers.begin(), numbers.end());

  for (vector<int>::const_iterator iter = numbers.begin(); iter != numbers.end(); iter++) {
    cout << *iter << endl;
  }

  return 0;
} 