#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	unsigned long a, b, r, c, d;
	unsigned long ta, tb;
	int i = 0;


	while(cin>>a>>b) {
		
	if (a > b){
		ta = a;
		tb = b;
	} else {
		ta = b;
		tb = a;
	}
	

	while (1) {
	r = ta % tb;
	if (r == 0) break;
	ta = tb;
	tb = r;
	}
	c = tb;
	
	d = a * (b  / c);

	printf("%d %d\n", c, d);
	}

	

	return (0);
}