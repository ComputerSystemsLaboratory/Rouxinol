#include <iostream>
#include <vector>

using namespace std;

double f(double x) {
  return x * x;
}

int main(int argc, char *argv[]) {
  double d;
  double s;
  vector<int> result;

  while (cin >> d) {
    s = 0.0;
    for (int i = 0; i < 600/d; i++)
      s += d * f(d * i);
    result.push_back((int)s);
  }

  for (int i = 0; i < result.size(); i++)
    cout << result[i] << endl;
  return 0;
}