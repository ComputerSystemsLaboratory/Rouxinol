# include "bits/stdc++.h"
using namespace std;
using LL = long long;
using ULL = unsigned long long;
const double PI = acos(-1);
template<class T>constexpr T INF() { return ::std::numeric_limits<T>::max(); }
template<class T>constexpr T HINF() { return INF<T>() / 2; }
template <typename T_char>T_char TL(T_char cX) { return tolower(cX); };
template <typename T_char>T_char TU(T_char cX) { return toupper(cX); };
typedef pair<LL, LL> pii;
const int vy[] = { -1, -1, -1, 0, 1, 1, 1, 0 }, vx[] = { -1, 0, 1, 1, 1, 0, -1, -1 };
const int dx[4] = { -1,0,1,0 }, dy[4] = { 0,-1,0,1 };
const char dir[4] = { 'u','l','d','r' };
int popcnt(unsigned long long n) { int cnt = 0; for (int i = 0; i < 64; i++)if ((n >> i) & 1)cnt++; return cnt; }
int d_sum(LL n) { int ret = 0; while (n > 0) { ret += n % 10; n /= 10; }return ret; }
int d_cnt(LL n) { int ret = 0; while (n > 0) { ret++; n /= 10; }return ret; }
LL gcd(LL a, LL b) { if (b == 0)return a; return gcd(b, a%b); };
LL lcm(LL a, LL b) { LL g = gcd(a, b); return a / g*b; };
# define ALL(qpqpq)           (qpqpq).begin(),(qpqpq).end()
# define UNIQUE(wpwpw)        sort(ALL((wpwpw)));(wpwpw).erase(unique(ALL((wpwpw))),(wpwpw).end())
# define LOWER(epepe)         transform(ALL((epepe)),(epepe).begin(),TL<char>)
# define UPPER(rprpr)         transform(ALL((rprpr)),(rprpr).begin(),TU<char>)
# define FOR(i,tptpt,ypypy)   for(LL i=(tptpt);i<(ypypy);i++)
# define REP(i,upupu)         FOR(i,0,upupu)
# define INIT                 std::ios::sync_with_stdio(false);std::cin.tie(0)
# pragma warning(disable:4996)

int n;
pair<int,int> G[30];
int indeg[30];
vector<int> v1, v2, v3;
void preorder(int cur, int prev) {
	v1.emplace_back(cur);
	if(G[cur].first>=0)preorder(G[cur].first,cur);
	if(G[cur].second>=0)preorder(G[cur].second, cur);
}

void inorder(int cur, int prev) {
	if (G[cur].first >= 0)inorder(G[cur].first, cur);
	v2.emplace_back(cur);
	if (G[cur].second >= 0)inorder(G[cur].second, cur);
}

void postorder(int cur, int prev) {
	if (G[cur].first >= 0)postorder(G[cur].first, cur);
	if (G[cur].second >= 0)postorder(G[cur].second, cur);
	v3.emplace_back(cur);
}
int main() {
	cin >> n;
	REP(i, n) {
		int id, l, r;
		cin >> id >> l >> r;
		if (l >= 0)indeg[l]++;
		if (r >= 0)indeg[r]++;
		G[id] = make_pair(l, r);
	}
	int root = -1;
	REP(i, n)if (indeg[i] == 0)root = i;
	cout << "Preorder" << endl;
	preorder(root, -1);
	REP(i, n) {
		cout << " ";
		cout << v1[i];
	}
	cout << endl;
	cout << "Inorder" << endl;
	inorder(root, -1);
	REP(i, n) {
		cout << " ";
		cout << v2[i];
	}
	cout << endl;
	cout << "Postorder" << endl;
	postorder(root, -1);
	REP(i, n) {
		cout << " ";
		cout << v3[i];
	}
	cout << endl;
}
