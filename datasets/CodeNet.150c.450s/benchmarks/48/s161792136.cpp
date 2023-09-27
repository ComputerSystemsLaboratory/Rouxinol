#include <cstdio>
#include <utility>
#include <cmath>
#include <algorithm>
using namespace std;

#define gcu getchar_unlocked
int in(int c){int n=0;bool m=false;if(c=='-')m=true,c=gcu();
	do{n=10*n+(c-'0'),c=gcu();}while(c>='0');return m?-n:n;}
int in() {return in(gcu());}
bool scan(int &n){int c=gcu();return c==EOF?false:(n=in(c),true);}
bool scan(char &c){c=gcu();gcu();return c!=EOF;}
//bool scan(string &s){int c;s="";
//	for(;;){c=gcu();if(c=='\n'||c==' ')return true;else if(c==EOF)return false;s+=c;}}
#define pcu putchar_unlocked
#define vo inline void out
template <typename T>
vo(T n){static char buf[20];char *p=buf;
	if(n<0)pcu('-'),n*=-1;if(!n)*p++='0';else while(n)*p++=n%10+'0',n/=10;
	while (p!=buf)pcu(*--p);}
vo(const char *s){while(*s)pcu(*s++);}
vo(char c){pcu(c);}
//vo(string &s){for (char c: s) pcu(c);}
template <typename head, typename... tail> vo(head&& h, tail&&... t){out(h);out(move(t)...);}
//template <typename T> vo(vector<T> &v){for(T &x:v)out(&x == &v[0]?"":" "),out(x);out('\n');}
#undef vo

int main() {
	for (int e, m; (e = m = in());) {
		for (int z = cbrt(e) + 0.00001; z >= 0; z--) {
			int te = e - z * z * z;
			int y = (int)sqrt(te);
			int tm = z + y + te - y * y;
			if (y > m)
				break;
			m = min(m, tm);
		}
		out(m, '\n');
	}
}
