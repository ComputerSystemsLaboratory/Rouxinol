#include <cstdio>
#include <utility>
#include <string>
#include <cctype>
#include <stack>
using namespace std;

#define gcu getchar_unlocked
int in(int c){int n=0;bool m=false;if(c=='-')m=true,c=gcu();
	do{n=10*n+(c-'0'),c=gcu();}while(c>='0');return m?-n:n;}
int in() {return in(gcu());}
bool scan(int &n){int c=gcu();return c==EOF?false:(n=in(c),true);}
bool scan(char &c){c=gcu();gcu();return c!=EOF;}
bool scan(string &s){int c;s="";
	for(;;){c=gcu();if(c=='\n'||c==' ')return true;else if(c==EOF)return false;s+=c;}}
#define pcu putchar_unlocked
#define vo inline void out
template <typename T>
vo(T n){static char buf[20];char *p=buf;
	if(n<0)pcu('-'),n*=-1;if(!n)*p++='0';else while(n)*p++=n%10+'0',n/=10;
	while (p!=buf)pcu(*--p);}
vo(const char *s){while(*s)pcu(*s++);}
vo(char c){pcu(c);}
template <typename head, typename... tail> vo(head&& h, tail&&... t){out(h);out(move(t)...);}
#undef vo

int decode() {
	string s;
	scan(s);
	int n = 0;
	for (auto i = s.begin(); i != s.end(); i++) {
		int d = isdigit(*i) ? *i++ - '0' : 1;
		switch (*i) {
		case 'm': d *= 1000; break;
		case 'c': d *= 100; break;
		case 'x': d *= 10; break;
		}
		n += d;
	}
	return n;
}

stack<char> encode(int n) {
	stack<char> s;
	static const string suffix = "ixcm";
	for (auto i = suffix.begin(); n; i++, n /= 10) {
		char d = n % 10;
		if (d) {
			s.push(*i);
			if (d > 1)
				s.push(d + '0');
		}
	}
	return move(s);
}

int main() {
	for (int n = in(); n--;) {
		int a = decode();
		for (stack<char> s = encode(a + decode()); !s.empty();s.pop())
			out(s.top());
		out('\n');
	}
}
