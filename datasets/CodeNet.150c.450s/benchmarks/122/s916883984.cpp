#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP0(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define REP1(i,n) for(int i=1, i##_len=(n); i<=i##_len; ++i)
#define RREP0(i,n) for(int i=n-1; i>=0; --i)
#define RREP1(i,n) for(int i=n; i>=1; --i)

#define SORT(c) sort((c).begin(),(c).end())
#define whole(f,x,...) ([&](decltype((x)) whole) { return (f)(begin(whole), end(whole), ## __VA_ARGS__); })(x)
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define CLR(a) memset((a), 0 ,sizeof(a))
#define MAX 2000000

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}

typedef long long LL;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;

const int INTINF = 2147483646;
const LL LLINF = 9223372036854775806;
const double EPS = 1e-10;
const double PI  = acos(-1.0);

int gcd(int a,int b){return b?gcd(b,a%b):a;}
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

VI A;
int H=0;


int hparent(int i){return i/2;}
int hleft(int i){return i*2;}
int hright(int i){return i*2+1;}

void maxHeapify(int i) {
  int L = hleft(i);
  int R = hright(i);
  int largest;
  if (L<=H && A[L] > A[i]) {
    largest = L;
  }else{
    largest = i;
  }
  if (R<=H && A[R] > A[largest]) {
    largest = R;
  }
  if (largest!=i) {
    swap(A[i],A[largest]);
    maxHeapify(largest);
  }
}

int extract(){
  int maxv;
  if (H<1) return -INTINF;
  maxv=A[1];
  A[1]=A[H--];
  maxHeapify(1);
  return maxv;
}


void increaseKey(int i, int key){
  if (key<A[i]) return;
  A[i]=key;
  while (i>1 && A[i/2]<A[i]) {
    swap(A[i], A[i/2]);
    i=i/2;
  }
}


void insert(int key){
  H++;
  A[H]=-INTINF;
  increaseKey(H,key);
}

int main(int argc, char const *argv[]) {
  A.reserve(MAX);
  cin.tie(0); ios::sync_with_stdio(false);
  int tmp;
  string com;
  while (1) {
    std::cin >> com;
    if (com=="insert") {
      std::cin >> tmp;
      insert(tmp);
    }else if (com=="extract"){
      tmp = extract();
      std::cout << tmp << '\n';
    }else if(com=="end"){
      break;
    }
  }

  return 0;
}

