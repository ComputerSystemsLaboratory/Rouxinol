#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
  vector<int> result;
  int num[100] = {0};
  int tmp;
  while (cin >> tmp)
    num[tmp-1]++;

  int max = 0;
  for (int i = 0; i < 100; i++)
    if (max < num[i]) {
      max = num[i];
      result.clear();
      result.push_back(i+1);
    } else if (max == num[i]) {
      result.push_back(i+1);
    }

  for (int i = 0; i < result.size(); i++)
    cout << result[i] << endl;
  return 0;
}