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

	string s;
	cin >> s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='N'){
			d.roll_n();
		}else if(s[i]=='E'){
			d.roll_e();
		}else if(s[i]=='W'){
			d.roll_w();
		}else if(s[i]=='S'){
			d.roll_s();
		}
	}
	cout << d[TOP] << endl;
    return 0;
}