#include <cstdio>
#include <cctype>
#include <vector>
using namespace std;

#define si static inline
#define gcu getchar_unlocked
si int in() {
	int c, n = 0;
	//bool minus = false;
	//if ((c = gcu()) == '-') minus = true; else ungetc(c, stdin);
	while ((c = gcu()) >= '0' && c <= '9') n = 10 * n + (c - '0');
	return n; }
	//return minus ? -n : n; }
si void scan(char *s) {while (!isspace(*s++ = gcu()));}
#define pcu putchar_unlocked
#define svo si void out
template <typename T>
svo(T n) {
	static char buf[20];
	char *p = buf;
	//if(n < 0) pcu('-'), n *= -1;
	if (!n) *p++ = '0';
	else while (n) *p++ = n % 10 + '0', n /= 10;
	while (p != buf) pcu(*--p); }
svo(const char *s){while(*s)pcu(*s++);}
svo(char *s){while(*s)pcu(*s++);}
svo(char c){pcu(c);}
template <typename T>
//svo(vector<T> &v){for(T &x:v)out(' '),out(x);out('\n');}
svo(vector<T> &v){for(T &x:v)out(&x == &v[0]?"":" "),out(x);out('\n');}
template <typename head, typename... tail>
svo(head&& h, tail&&... t){out(h);out(move(t)...);}

struct union_find {
	struct node {int p, r = 0;};
	vector<node> nodes;

	union_find(int n) {
		nodes.resize(n);
		int i = 0;
		for (node &n: nodes)
			n.p = i++;
	}
	int find(int x) {
		int &p = nodes[x].p;
		if (p == x)
			return x;
		else {
			p = find(p);
			return p;
		}
	}
	void _union(int a, int b) {
		int ar = find(a), br = find(b);
		node &an = nodes[ar], &bn = nodes[br];
		if (an.r > bn.r)
			bn.p = ar;
		else if (an.r > bn.r)
			an.p = br;
		else if (ar != br) {
			bn.p = ar;
			an.r++;
		}
	}
	void read(int n) {
		int a;
		while(n--) {
			a = in();
			_union(a, in());
		}
	}
};

int main() {
	union_find u(in());
	u.read(in());
	int q = in();
	while (q--)
		out(u.find(in()) == u.find(in()) ? "yes" : "no", '\n');
}

