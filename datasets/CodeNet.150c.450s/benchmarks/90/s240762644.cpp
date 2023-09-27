#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Dat
{
public:
  int num, frq;
  Dat():num(0), frq(0) {}
};

class GreaterFrq
{
public:
  bool operator()(const Dat& lhs, const Dat& rhs)
  {
    if (lhs.frq == rhs.frq)
      return lhs.num < rhs.num;
    return lhs.frq > rhs.frq;
  }
};

int main()
{
  int in;
  vector<Dat> dat(100+1);
  while (cin >> in) {
    dat[in].num = in;
    ++dat[in].frq;
  }

  sort(dat.begin(), dat.end(), GreaterFrq());

  int f = dat.front().frq;
  for (int i = 0; i < dat.size(); ++i) {
    if (f == dat[i].frq)
      cout << dat[i].num << endl;
  }

  return 0;

}