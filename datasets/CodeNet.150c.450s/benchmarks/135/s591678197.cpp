#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
  while (true) {
    int n, m;
    cin >> n >> m;

    if (n == 0 && m == 0) { break; }

    vector<int> r;
    vector<int> c;

    for (int i = 0; i < n; i++) {
      int input;
      cin >> input;
      r.push_back(input);
    }

    for (int i = 0; i < m; i++) {
      int input;
      cin >> input;
      c.push_back(input);
    }

    vector<int> r_w(1500 * 1000, 0);
    vector<int> c_w(1500 * 1000, 0);

    for (int i = 0; i < n; i++) {
      int w = 0;
      for (int j = i; j < n; j++) {
        w += r[j];
        r_w[w] += 1;
      }
    }

    for (int i = 0; i < m; i++) {
      int w = 0;
      for (int j = i; j < m; j++) {
        w += c[j];
        c_w[w] += 1;
      }
    }

    /*
       cout << "__________" << endl;
       for (int i = 0; i < n; i++) {
       if (r_w[i] > 0) { cout << i << ": " << r_w[i] << endl; }
       }

       cout << "__________" << endl;
       for (int i = 0; i < m; i++) {
       if (c_w[i] > 0) { cout << i << ": " << c_w[i] << endl; }
       }
       */

    int result = 0;
    for (int i = 0; i < (1500 * 1000); i++) {
      // if (r_w[i] * c_w[i] > 0) cout << i << ": " << r_w[i] << " / " <<  c_w[i] << endl;
      result += r_w[i] * c_w[i];
    }

    cout << result << endl;
  }

  return 0;
}