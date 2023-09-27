#include <cstdio>
#include <cctype>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

#define gcu getchar_unlocked
#define pcu putchar_unlocked
#define _T template <typename T>
#define _HT template <typename H, typename... T>
#define _il inline
#define _in _il int in
#define _sc _il bool scan
_T T in(int c){T n=0;bool m=false;while(isspace(c)){c=gcu();}if(c=='-')m=true,c=gcu();
	do{n=10*n+(c-'0'),c=gcu();}while(c>='0');return m?-n:n;} //&&c<='9'
_in() {return in<int>(gcu());}
_T T scan(T &n){int c=gcu();return c==EOF?false:(n=in<T>(c),true);}
_sc(char &c){c=gcu();gcu();return c!=EOF;}
#ifdef _GLIBCXX_STRING
_sc(string &s){int c;s="";
	for(;;){c=gcu();if(c=='\n'||c==' ')return true;else if(c==EOF)return false;s+=c;}}
#endif
_HT _sc(H &h, T&&... t){return scan(h)&&scan(t...);}
#define _vo _il void out
#define _vl _il void outl
_vo(bool b) {pcu('0'+b);}
_vo(const char *s){while(*s)pcu(*s++);}
_vo(char c){pcu(c);}
#ifdef _GLIBCXX_STRING
_vo(string s){for(char c:s)pcu(c);}
#endif
_T _vo(T n){static char buf[20];char *p=buf;
	if(n<0)pcu('-'),n*=-1;if(!n)*p++='0';else while(n)*p++=n%10+'0',n/=10;
	while (p!=buf)pcu(*--p);}
_vl(){out('\n');}
#ifdef _GLIBCXX_VECTOR
_T _vo(vector<T> &v){for(T &x:v)out(&x == &v[0]?"":" "),out(x);outl();}
#endif
_HT _vo(H&& h, T&&... t){out(h);out(move(t)...);}
template <typename... T> _vl(T&&... t){out(move(t)...);outl();}

int main() {
	for (int n; (n = in());) {
		bool r = true, l = true, p = true;
		int s = 0;
		while (n--) {
			char c = gcu(); gcu(), gcu();
			if (c == 'r')
				r = !r;
			else
				l = !l;
			if (r == l && r != p) {
				s++;
				p = r;
			}
		}
		outl(s);
	}
}
