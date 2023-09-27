#include <iostream>
#include <vector>
using namespace std;

int main() {
  int d, type = 26;
  vector<int> c;
  vector<vector<int>> s;
  vector<int> t;
  vector<int> v;
  vector<int> last;

  cin >> d;

  for (int i = 0; i < type; i++) {
    int tmp;
    cin >> tmp;
    c.push_back(tmp);
  }

  for (int i = 0; i < d; i++) {
    vector<int> vtmp;
    for (int j = 0; j < type; j++) {
      int tmp;
      cin >> tmp;
      vtmp.push_back(tmp);
    }
    s.push_back(vtmp);
  }

  for (int i = 0; i < d; i++) {
    int tmp;
    cin >> tmp;
    t.push_back(tmp);
  }

  // cout << d << endl;
  // for (int i = 0; i < type; i++) {
  //   cout << c[i] << " ";
  // }
  // cout << endl;

  // for (int j = 0; j < d; j++) {
  //   for (int i = 0; i < type; i++) {
  //     cout << s[j][i] << " ";
  //   }
  //   cout << endl;
  // }

  // for (int i = 0; i < d; i++) {
  //   cout << t[i] << " ";
  // }
  // cout << endl;

  for (int i = 0; i < type; i++) {
    last.push_back(-1);
  }

  for (int day = 0; day < d; day++) {
    last[t[day] - 1] = day;
    int desat = 0;
    for (int j = 0; j < type; j++) {
      desat += c[j] * (day - last[j]);
    }
    // cout << "desat " << desat << endl;
    if (day == 0) {
      v.push_back(s[day][t[day] - 1] - desat);
    } else {
      v.push_back(v[day - 1] + s[day][t[day] - 1] - desat);
    }
    cout << v[day] << endl;
  }
  return 0;
}