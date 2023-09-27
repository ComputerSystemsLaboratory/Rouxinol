#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<cctype>

#define MAX 32
using namespace std;

class MCXI{
	string s;
	int N,m,c,x,i;
public:
	MCXI():N(0),m(0),c(0),x(0),i(0){}
	MCXI(const char *s){
		unsigned int len = strlen(s);
		this->N = 0;
		
		for(unsigned int i = 0; i < len; ++i){
			int dig = 1;
			if( isdigit( s[i] ) ){
				dig = s[i] - '0';
				++i;
			}
			switch( s[i] ){
				case 'm':
					this->N += dig * 1000;
					this->m = dig;
					break;
				case 'c':
					this->N += dig * 100;
					this->c = dig;
					break;
				case 'x':
					this->N += dig * 10;
					this->x = dig;
					break;
				case 'i':
					this->N += dig;
					this->i = dig;
					break;
			}
		}
	}
	MCXI operator+(const MCXI &b){
		MCXI c;
		c.N = this->N + b.N;
		c.Conv();
		return c;
	}
	const char *to_string(){
		if( m > 1 ) s += m+'0'; if( m > 0 ) s+='m';
		if( c > 1 ) s += c+'0'; if( c > 0 ) s+='c';
		if( x > 1 ) s += x+'0'; if( x > 0 ) s+='x';
		if( i > 1 ) s += i+'0'; if( i > 0 ) s+='i';
		return s.c_str();
	}
private:
	void Conv(){
		int tmp = this->N;
		this->m = tmp / 1000;
		tmp -= this->m * 1000;
		this->c = tmp / 100;
		tmp -= this->c * 100;
		this->x = tmp / 10;
		tmp -= this->x * 10;
		this->i = tmp;
	}
};
int main(){
	int n;

	scanf("%d",&n);
	for(int d=0;d<n;++d){
		char a[MAX], b[MAX];
		scanf("%s%s", a, b);
		MCXI mcxiA(a), mcxiB(b), mcxiC;
		mcxiC = mcxiA + mcxiB;
		printf("%s\n", mcxiC.to_string());
	}
	return 0;
}