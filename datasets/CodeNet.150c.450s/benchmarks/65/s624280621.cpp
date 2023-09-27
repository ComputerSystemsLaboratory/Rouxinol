//include
//------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <climits>
#include <queue>

using namespace std;

//typedef
//------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;

//container util
//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())

//repetition
//------------------------------------------
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//constant
//--------------------------------------------
const double EPS = 1e-10;
const double PI  = acos(-1.0);

string isstable(vector< pair<int, char> >& orig, vector< pair<int, char> >& A, int N){
  for(int i=0;i<N;){
	int d = A[i].first;
	queue<char> buf;
	while(i < N && A[i].first == d){
	  buf.push(A[i++].second);
	}
	REP(j,N)
	  if(orig[j].first == d){
		if(orig[j].second != buf.front())
		  return "Not stable";
		else
		  buf.pop();
	  }
  }
  return "Stable";
}
  
void bubble(vector< pair<int, char> > A, int N){
  vector< pair<int, char> > orig = A;
  REP(i,N)
	for(int j=N-1;j>i;--j)
	  if(A[j-1].first > A[j].first)
		swap(A[j-1], A[j]);

  cout << A[0].second << A[0].first;
  REP(i,N-1)
	cout << " " << A[i+1].second << A[i+1].first;
  cout << endl;
  cout << isstable(orig, A, N) << endl;
}

void selection(vector< pair<int, char> > A, int N){
  vector< pair<int, char> > orig = A;
  REP(i,N){
	int minj = i;
	FOR(j,i,N)
	  if(A[j].first < A[minj].first)
		minj = j;
	swap(A[i], A[minj]);
  }
  
  cout << A[0].second << A[0].first;
  REP(i,N-1)
	cout << " " << A[i+1].second << A[i+1].first;
  cout << endl;
  cout << isstable(orig, A, N) << endl;
}

int main(){
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  int N; cin >> N; cin.ignore();
  string line; getline(cin, line);

  vector<pair<int, char> > A(N);
  REP(i,N){
	A[i].first = line[i*3+1] - '0';
	A[i].second = line[i*3];
  }

  bubble(A, N);
  selection(A, N);
  
  return 0;
}