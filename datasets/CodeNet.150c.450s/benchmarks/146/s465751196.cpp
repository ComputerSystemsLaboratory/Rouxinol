#include <iostream>

using namespace std;

class Vector3{
public:
	double x,y;

	double operator*( Vector3 hoge ){
		return x * hoge.y - y * hoge.x;
	}

	void operator-=( Vector3 hoge ){
		x -= hoge.x;
		y -= hoge.y;
	}

};

int main(int argc, char const* argv[])
{
	Vector3 A,B,C,D;
	int n;

	cin >> n;

	for( int i = 0;i < n;i++ ){
		cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y >> D.x >> D.y;

		B -= A;
		D -= C;

		double answer = B * D;

		if( answer == 0 ) cout << "YES" << endl;
		else cout << "NO" << endl;
	}


	return 0;
}