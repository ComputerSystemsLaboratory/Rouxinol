#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>

using namespace std;

int main()
{
  vector<int> num;
  int i, x;
  for (i = 0; i < 5; i++) {
    cin >> x;
		num.push_back(x);
  }

  sort(num.begin(), num.end(), greater<int>());

  for (i = 0; i < 5; i++) {
		if (i == 4) {
      cout << num[i] << endl;
			break;
    }
    cout << num[i] << " ";
  }

  return 0;
}