#include <iostream>
#include <cmath>

using namespace std;

const double pi = 4*atan(1);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a, b, ans;
	char op;
	while(true) {
		cin>>a>>op>>b;
		if     (op=='+') ans=a+b;
		else if(op=='-') ans=a-b;
		else if(op=='*') ans=a*b;
		else if(op=='/') ans=a/b;
		else break;
		cout<<ans<<'\n';
	}
	return 0;
}

