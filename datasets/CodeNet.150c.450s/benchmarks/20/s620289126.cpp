#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	string h, m, s;
	char ts[10];
	int tt;
	tt = t / 60 / 60; 
	t = t % (60 * 60);
	sprintf(ts, "%d", tt );
	h.append(ts);
	 
	tt = t / 60;
	t = t % 60;
	sprintf(ts, "%d", tt);
	m.append(ts);

	sprintf(ts, "%d", t);
	s.append(ts);

	cout << h << ":" << m << ":" << s << endl;
return 0;
}