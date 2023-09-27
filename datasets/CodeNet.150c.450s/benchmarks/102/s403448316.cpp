#include <iostream>
#include <vector>
using namespace std;
class Field {
  public:
  vector<vector<bool> > field;
  int nx, ny;
  bool def;
  Field(int nnx, int nny, bool firs, bool ddef) {
    def = ddef;
    nx = nnx;
    ny = nny;
    vector<vector<bool> > buff(nnx, vector<bool>(nny, firs));
    field = buff;
  }
  void set(int x, int y, bool flag) {
    field[x][y] = flag;
  }
  bool get(int x, int y) {
    if(x >= nx || y >= ny || x < 0 || y < 0) return def;
    return field[x][y];
  }
  void print() {
    for(int i = 0; i < ny; ++i) {
      for(int j = 0; j < nx; ++j) {
        cout << field[j][i];
      }
      cout << endl;
    }
    cout << endl;
  }
};
int mark(Field&, Field&, int x, int y);

int main() {
  while(1) {
    int nx, ny;
    cin >> nx >> ny;
    if(!nx && !ny) break;
    Field field(nx, ny, false, false);
    int startx, starty;
    for(int i = 0; i < ny; ++i) {
      for(int j = 0; j < nx; ++j) {
        char c;
        cin >> c;
        field.set(j, i, ((c == '#') ? false : true));
        if(c == '@') {
          startx = j;
          starty = i;
        }
      }
    }
    //for(auto i = field.begin(); i != field.end(); ++i) {
    //  for(auto j = field[i].begin(); j != field[j].end(); ++j) {
    //    cout << field[i][j];
    //  }
    //  cout << endl;
    //}
    Field result(nx, ny, false, true);
    cout << mark(field, result, startx, starty) << endl;
  }
  return 0;
}

int mark(Field &field, Field &result, int x, int y) {
  int count;
  if(field.get(x, y) && !result.get(x, y)) {
    result.set(x, y, true);
    count = mark(field, result, x + 1, y);
    count += mark(field, result, x, y + 1);
    count += mark(field, result, x - 1, y);
    count += mark(field, result, x, y - 1);
    ++count;
    return count;
  } else {
    return 0;
  }
}