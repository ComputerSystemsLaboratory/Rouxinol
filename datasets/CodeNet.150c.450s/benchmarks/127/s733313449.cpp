#include <cstdio>
#include <utility>
#include <string>
#include <set>
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
bs(string &s){int c; s = "";
	for(;;){c=gcu();if(c=='\n'||c==' ')return true;else if(c==EOF)return false;s+=c;}}
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
vo(string &s){for (char c: s) pcu(c);}
template <typename head, typename... tail>
vo(head&& h, tail&&... t){out(h);out(move(t)...);}
//template <typename T>
//vo(vector<T> &v){for(T &x:v)out(&x == &v[0]?"":" "),out(x);out('\n');}
#undef vo

int main() {
	for (int n = in(); n--;) {
		string s, r;
		set<string> ss;
		scan(s);
		r = s;
		reverse(r.begin(), r.end());
		ss.insert(s);
		ss.insert(r);
		for (int i = 1; i < (int) s.size(); i++) {
			string a = s.substr(0, i), b = r.substr(0, s.size() - i),
				   c = r.substr(s.size() - i), d = s.substr(i);
			for (auto p : vector<pair<string *, string *>>{
				 {&a, &b}, {&c, &d}, {&c, &b}, {&d, &a}, {&b, &a}, {&d, &c}})
				ss.insert(*(p.first) + *(p.second));
		}
		out(ss.size(), '\n');
	}
}
