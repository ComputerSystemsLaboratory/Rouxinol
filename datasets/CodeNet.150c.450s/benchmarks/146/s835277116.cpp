#include <iostream>

using namespace std;

struct Vector
{
	double x;
	double y;
};

istream& operator>>(istream& stream, Vector& p)
{
	return stream >> p.x >> p.y;
}

double slope(Vector p1, Vector p2)
{
	return (p2.y - p1.y) / (p2.x - p1.x);
}

int main()
{
	int length;
	cin >> length;

	while(length-- > 0)
	{
		Vector a, b, c, d;
		cin >> a >> b >> c >> d;

		if( slope(a, b) == slope(c, d) )
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}