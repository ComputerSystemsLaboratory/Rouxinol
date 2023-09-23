#include <iostream>
using namespace std;

#define SWAP(a, b) { int x=(a); (a)=(b); (b)=x; }

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    if(a>b) SWAP(a,b);
	if(b>c) SWAP(b,c);
	if(a>b) SWAP(a,b);

	cout << a << ' ' << b << ' ' << c << endl;

    return 0;
}

