#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<map>
#include<list>
#include<cctype>
#include<utility>
#include<algorithm>
#include<cmath>
#include<cctype>
using namespace std;

enum FACE { TOP,BACK, RIGHT ,LEFT , FRONT,  BOTTOM};
template <class T>
class dice {
public:
  dice() {
    id[TOP] = 0; id[FRONT] = 1; id[LEFT] = 2;
    id[RIGHT] = 3; id[BACK] = 4; id[BOTTOM] = 5;
  }
  T& operator[] (int f) { return var[id[f]]; }
  const T& operator[] (int f) const { return var[id[f]]; }
  bool operator==(const dice<T>& b) const {
    const dice<T> &a = *this;
    return a[TOP] == b[TOP] && a[BOTTOM] == b[BOTTOM] &&
           a[FRONT] == b[FRONT] && a[BACK] == b[BACK] &&
           a[LEFT] == b[LEFT] && a[RIGHT] == b[RIGHT];
  }
  void roll_n() { roll(TOP, BACK, BOTTOM, FRONT); }
  void roll_s() { roll(TOP, FRONT, BOTTOM, BACK); }
  void roll_e() { roll(TOP, LEFT, BOTTOM, RIGHT); }
  void roll_w() { roll(TOP, RIGHT, BOTTOM, LEFT); }
  void roll_z() { roll(FRONT, RIGHT, BACK, LEFT); }
  vector<dice> all_rolls() {
    vector<dice> ret;
    for (int k = 0; k < 6; (k&1?roll_w():roll_s()),++k)
      for (int i = 0; i < 4; roll_z(), ++i)
        ret.push_back(*this);
    return ret;
  }
  bool equivalent_to(const dice& di) {
    for (int k = 0; k < 6; (k&1?roll_w():roll_s()),++k)
      for (int i = 0; i < 4; roll_z(), ++i)
        if (*this == di) return true;
    return false;
  }
private:
  void roll(FACE a, FACE b, FACE c, FACE d) {
    T tmp = id[a];
    id[a] = id[b]; id[b] = id[c];
    id[c] = id[d]; id[d] = tmp;
  }
  T var[6];
  int id[6];
};

int main()
{
	dice<int> d;
	for(int i=0;i<6;i++){
		int n; cin >>n;
		d[i] = n;
	}
	vector<dice<int> > vd;
	vd = d.all_rolls();

	int n;cin >> n;
	for(int i=0;i<n;i++){
		int top,back;
		cin >> top >> back;
		for(int i=0;i<vd.size();i++){
			if(vd[i][TOP] == top && vd[i][BACK] == back){
				cout << vd[i][RIGHT] << endl;
				break;
			}
		}
	}
    return 0;
}