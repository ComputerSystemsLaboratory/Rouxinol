#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a, b, c, d, e, f;
	
	cin >> a >> b >> c;
	
	cout << min(a, min(b, c)) << " " << (min(a, max(b, c)), max(min(b, max(a, c)), min(c, max(a, b))))  << " " << max(a, max(b, c)) << endl;
	
    return 0;
}