#include <bits/stdc++.h>
using namespace std;

#define iota(i,n,b,s) for(int i=int(b);i!=int((b)+(s)*(n));i+=(s))
#define range(i,n,m) iota(i,(((n)>(m))?((n)-(m)):((m)-(n))),(n),((n)>(m)?-1:1))
#define rep(i,n) iota(i,(n),0,1)
#define loop for(;;)

#define INF (1e9)
#define EPS (1e-9)
#define cons(a,b) (make_pair(a,b))
#define car(a) (a.first)
#define cdr(a) (a.second)
#define cadr(a) (car(cdr(a)))
#define cddr(a) (cdr(cdr(a)))
#define all(a) a.begin(), a.end()
#define trace(var) cerr<<">>> "<<#var<<" = "<<var<<endl;

typedef long long Integer;
typedef double Real;
typedef vector<int> vi;
typedef vector<string> vs;
typedef map<string,int> Dictionary;
const Real PI = acos(-1);

template<class S, class T>
ostream& operator<<(ostream& os, pair<S,T> p) {
  os << '(' << car(p) << ", " << cdr(p) << ')';
  return os;
}

template<class T>
ostream& operator<<(ostream& os, vector<T> v) {
  os << v[0];
  for (int i=1, len=v.size(); i<len; ++i) os << ' ' << v[i];
  return os;
}

int dx[] = { -1, 0, 1, 0 };
int dy[] = {  0, -1, 0, 1 };

enum Day {
  Sat = 0,
  Sun = 1,
  Mon, Tue, Wed, Thu, Fri
};

Day zeller(int y, int m, int d) {
  if (m == 1 || m == 2) {
    --y; m += 12;
  }
  int Y = y % 100;
  int c = y / 100;
  int gamma = 5 * c + c / 4; // Gregorian (1582 <= y)
  //int gamma = 6 * c + 5; // Julian (4 <= y <= 1582)
  int h = d + int(26 * (m+1) / 10)
    + Y + Y / 4 + gamma;
  h %= 7;
  return Day(h);
}

string show_day (Day a) {
  switch (a) {
    case Mon: return "Monday";
    case Tue: return "Tuesday";
    case Wed: return "Wednesday";
    case Thu: return "Thursday";
    case Fri: return "Friday";
    case Sat: return "Saturday";
    case Sun: return "Sunday";
    default: return "Holiday";
  }
}

int main() {

  loop {
    int a,b;
    cin >> a >> b;
    if (!cin) break;
    if (!a && !b) break;
    cout << show_day(zeller(2004, a, b)) << endl;
  }
  return 0;
}