#include <cstdio>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

#define gcu getchar_unlocked
#define ii inline int in
#define bs inline bool scan
ii(int c){int n=0;bool m=false;if(c=='-')m=true,c=gcu();
	do{n=10*n+(c-'0'),c=gcu();}while(c>='0');return m?-n:n;}
ii() {return in(gcu());}
bs(int &n){int c=gcu();return c==EOF?false:(n=in(c),true);}
bs(char &c){c=gcu();gcu();return c!=EOF;}
// bs(string &s){int c; s = "";
//	for(;;){c=gcu();if(c=='\n'||c==' ')return true;else if(c==EOF)return false;s+=c;}}
#undef ii
#undef bs
#define pcu putchar_unlocked
#define vo inline void out
template <typename T>
vo(T n){static char buf[20];char *p=buf;
	if(n<0)pcu('-'),n*=-1;if(!n)*p++='0';else while(n)*p++=n%10+'0',n/=10;
	while (p!=buf)pcu(*--p);}
vo(const char *s){while(*s)pcu(*s++);}
vo(char c){pcu(c);}
// vo(string &s){for (char c: s) pcu(c);}
template <typename head, typename... tail>
vo(head&& h, tail&&... t){out(h);out(move(t)...);}
#undef vo

struct P {int x, y;};

int main() {
	vector<int> dx = {-1, 0, 1, 0}, dy = {0, 1, 0, -1};
	for (int n; (n = in());) {
		vector<P> t = {{0, 0}};
		for (int i = 1; i < n; i++) {
			P p = t[in()];
			int d = in();
			t.push_back({p.x + dx[d], p.y + dy[d]});
		}
#define mme(o, xy) minmax_element(o.begin(), o.end(), [](const P &a, const P &b) {return a.xy < b.xy;})
#define diff(xy) (*xy.second).xy - (*xy.first).xy + 1
		auto x = mme(t, x);
		auto y = mme(t, y);
		out(diff(x), " ", diff(y), '\n');
	}
}
