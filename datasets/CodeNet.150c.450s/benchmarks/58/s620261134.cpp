#include <cstdio>
#include <stack>
#include <algorithm>
using namespace std;

int n;
int a[105];

int main(void){
	stack<int> s;
	char c;
	while(scanf("%c",&c)!=EOF){
		if(c=='+'){
			int a=s.top();
			s.pop();
			int b=s.top();
			s.pop();
			s.push(a+b);
		}
		if(c=='-'){
			int a=s.top();
			s.pop();
			int b=s.top();
			s.pop();
			s.push(b-a);
		}
		if(c=='*'){
			int a=s.top();
			s.pop();
			int b=s.top();
			s.pop();
			s.push(a*b);
		}
		if(c>='0' && c<='9'){
			int d=c-'0';
			while(1){
				scanf("%c",&c);
				if(c>='0' && c<='9')d=d*10+(c-'0');
				else break;
			}
			s.push(d);
		}else scanf("%*c");
	}
	printf("%d\n",s.top());
	return 0;
}