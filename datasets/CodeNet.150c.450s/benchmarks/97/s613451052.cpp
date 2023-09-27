#include <cstdio>
#include <utility>
#include <vector>
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
//template <typename T>
//vo(vector<T> &v){for(T &x:v)out(&x == &v[0]?"":" "),out(x);out('\n');}
#undef vo

struct point {int x, y;};

int main() {
	for (int n; (n = in());) {
		point ps = {0, 0}, pe = ps;
		vector<point> tiles = {ps};
		for (int i = 1; i < n; i++) {
			int n = in(), d = in();
			point p = tiles[n];
			switch (d) {
			case 0: p.x--; ps.x = min(ps.x, p.x); break;
			case 1: p.y++; pe.y = max(pe.y, p.y); break;
			case 2: p.x++; pe.x = max(pe.x, p.x); break;
			case 3: p.y--; ps.y = min(ps.y, p.y); break;
			}
			tiles.push_back(p);
		}
		out(pe.x - ps.x + 1, " ", pe.y - ps.y + 1, '\n');
	}
}
