#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
  vector<int> result;
  int a[4], b[4], hit, blow;

  while (cin >> a[0] >> a[1] >> a[2] >> a[3]) {
    cin >> b[0] >> b[1] >> b[2] >> b[3];
    hit = blow = 0;

    for (int i = 0; i < 4; i++)
      if (a[i] == b[i])
        hit++;
    for (int i = 0; i < 4; i++)
      for (int j = 0; j < 4; j++)
        if (a[i] == b[j])
          blow++;
    blow -= hit;

    result.push_back(hit);
    result.push_back(blow);
  }

  for (int i = 0; i < result.size(); i += 2)
    cout << result[i] << ' ' << result[i+1] << endl;
  return 0;
}