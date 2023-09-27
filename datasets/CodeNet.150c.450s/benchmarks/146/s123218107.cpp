#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  vector<string> result;
  int time;
  double x1, y1, x2, y2, x3, y3, x4, y4;
  cin >> time;
  for (int i = 0; i < time; i++) {
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    double ab, cd;
    ab = (y1 - y2) / (x1 - x2);
    cd = (y3 - y4) / (x3 - x4);
    if (ab == cd)
      result.push_back("YES");
    else
      result.push_back("NO");
  }

  for (int i = 0; i < result.size(); i++)
    cout << result[i] << endl;
  return 0;
}