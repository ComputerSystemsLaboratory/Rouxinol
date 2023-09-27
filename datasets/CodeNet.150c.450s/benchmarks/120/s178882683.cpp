#include <iostream>
#include <vector>
#include <cmath>

#define rep(var, n) for(int var = 0;var < n;var++)
using namespace std;

void print_field(vector< vector<int> > &field) {
  rep(i, field.size()) {
    rep(j, field[i].size()) {
      cout << field[i][j] << ' ';
    }
    cout << endl;
  }
  cout << endl;
}

int main() {
  while(true) {
    int R, C;
    cin >> R >> C;
    if(R == 0 && C == 0) break;

    vector< vector<int> > field(R, vector<int>(C));

    rep(i, R) {
      rep(j, C) {
        cin >> field[i][j];
      }
    }

    int ans = -1;

    int n = pow(2, R);
    rep(i, n) {
      vector< vector<int> > field2 = field;

      int num_of_one = 0;
      rep(j, R) {
        rep(k, C) {
          if((i >> j) & 1) field2[j][k] = 1 - field2[j][k];

          if(field2[j][k] == 1) num_of_one++;
        }
      }

      //print_field(field2);

      int flip_to = num_of_one > (R * C) ? 1 : 0;

      int num = 0;
      rep(i, C) {
        int num_col = 0;
        rep(j, R) {
          if(field2[j][i] == flip_to) {
            num_col++;
          }
        }

        if(num_col <= R / 2) {
          rep(j, R) {
            field2[j][i] = 1 - field2[j][i];
          }
          num_col = R - num_col;
        }

        num += num_col;
      }

      //print_field(field2);

      //cout << "---------------------" << endl;

      ans = max(ans, num);
    }

    //cout << "============" << endl;

    cout << ans << endl;
  }
}