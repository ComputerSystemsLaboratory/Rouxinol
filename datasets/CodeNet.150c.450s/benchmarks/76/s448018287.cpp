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

struct node {
	LL val;
	node *lch, *rch;
};

//数xを追加
node *insert(node *p, int x) {
	if (p == NULL) {
		node *q = new node;
		q->val = x;
		q->lch = q->rch = NULL;
		return q;
	}
	else {
		if (x < p->val)p->lch = insert(p->lch, x);
		else p->rch = insert(p->rch, x);
		return p;
	}
}

//値xを検索
bool find(node *p, int x) {
	if (p == NULL)return false;
	else if (x == p->val)return true;
	else if (x < p->val)return find(p->lch, x);
	else return find(p->rch, x);
}

//値xを削除
node *remove(node *p, int x) {
	if (p == NULL)return NULL;
	else if (x < p->val)p->lch = remove(p->lch, x);
	else if (x > p->val)p->rch = remove(p->rch, x);
	else if (p->lch == NULL) {
		node *q = p->rch;
		delete p;
		return q;
	}
	else if (p->lch->lch == NULL) {
		node *q = p->lch;
		q->rch = p->rch;
		delete p;
		return q;
	}
	else {
		node *q;
		for (q = p->lch; q->rch->rch != NULL; q = q->rch);
		node *r = q->rch;
		q->rch = r->lch;
		r->lch = p->lch;
		r->rch = p->rch;
		delete p;
		return q;
	}
}

node *root = NULL;

void inorder(node *p) {
	if(p->lch!=NULL)inorder(p->lch);
	cout << " " << p->val;
	if(p->rch!=NULL)inorder(p->rch);
}

void preorder(node *p) {
	cout << " " << p->val;
	if (p->lch != NULL)preorder(p->lch);
	if (p->rch != NULL)preorder(p->rch);
}

int main() {
	int n;
	cin >> n;
	REP(qqq, n) {
		string s;
		cin >> s;
		if (s == "insert") {
			LL num;
			cin >> num;
			root = insert(root, num);
		}
		else if (s == "find") {
			LL num;
			cin >> num;
			cout << (find(root, num) ? "yes" : "no") << endl;
		}
		else {
			inorder(root);
			cout << endl;
			preorder(root);
			cout << endl;
		}
	}
	//system("pause");
}
