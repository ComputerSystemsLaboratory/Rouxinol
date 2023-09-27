#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	string cs = a + b + f + e + a + b + f + e;
	string ds = e + f + b + a + e + f + b + a;
	string as = b + c + e + d + b + c + e + d;
	string fs = d + e + c + b + d + e + c + b;
	string bs = a + d + f + c + a + d + f + c;
	string es = c + f + d + a + c + f + d + a;
	
	

	int q;
	string top, front;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		cin >> top >> front;
		string situation = top + front;
		if (cs.find(situation, 0) < cs.size()) cout << c << endl;
		if (ds.find(situation, 0) < ds.size()) cout << d << endl;
		if (as.find(situation, 0) < as.size()) cout << a << endl;
		if (fs.find(situation, 0) < fs.size()) cout << f << endl;
		if (bs.find(situation, 0) < bs.size()) cout << b << endl;
		if (es.find(situation, 0) < es.size()) cout << e << endl;
	}

}
