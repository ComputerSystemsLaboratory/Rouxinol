#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(int)(n); i++)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
const ll MOD = 1000000007;
const ll INF = 10000000000000000;
vector<int> x4 = {0, 1, 0, -1}, x8 = {0, 1, 1, 1, 0, -1, -1, -1};
vector<int> y4 = {1, 0, -1, 0}, y8 = {1, 1, 0, -1, -1, -1, 0, 1};
template<class T> struct edge { int from, to; T cost;};
template<class T> inline bool chmin(T& a, T b){if (a>b){a = b; return true;}return false;}
template<class T> inline bool chmax(T& a, T b){if (a<b){a = b; return true;}return false;}
template<class T> inline T powerM(T a,T b){if (b==0) return 1;
T tmp = powerM(a,b/2); if (b%2==0) return tmp*tmp%MOD; else return tmp*tmp%MOD*a%MOD; }
template<class T> inline T power(T a,T b,T m){ if (b==0) return 1;
  T tmp = power(a,b/2,m); if (b%2==0) return tmp*tmp%m; else return tmp*tmp%m*a%m; }
template<class T> inline T gcd(T a, T b){if (b==0) return a; return gcd(b, a%b);}
template<class T> inline T lcm(T a, T b){return a / gcd(a,b) * b;}
// ax+by=gcd(a,b)を解く
template<class T> inline T extgcd(T a,T b,T &x,T &y){if (b==0){x=1; y=0; return a;} T d=extgcd(b,a%b,y,x); y -= a/b*x; return d;}
void hey(){ cout <<"hey" <<endl; }


struct Dice {
  int omote,ura,up,down,left,right;
  Dice(vector<int> &a){
    omote = a[0]; ura = a[5];
    up = a[4]; down = a[1];
    left = a[3]; right = a[2];
  }

  void operate(int &a,int &b,int &c,int &d){
    int buf = a;
    a = b; b = c; c = d; d = buf;
  }

  void rotate(char c){
    if (c == 'E') operate(omote, left, ura, right);
    if (c == 'N') operate(omote, down, ura, up);
    if (c == 'S') operate(omote, up, ura, down);
    if (c == 'W') operate(omote, right, ura, left);
    if (c == 'R') operate(down, right, up, left);
    if (c == 'L') operate(down, left, up, right);
  }
};

int main() {
  vector<int> a(6); rep(i, 6) cin >>a[i];
  Dice dice = Dice(a);
  int q; cin >>q;
  rep(qq, q){
    int omote,down; cin >>omote >>down;
    while (dice.omote != omote){
      dice.rotate('N');
      if (dice.omote != omote) dice.rotate('W');
    }
    while (dice.down != down){
      dice.rotate('L');
    }
    cout <<dice.right <<endl;
  }
}
