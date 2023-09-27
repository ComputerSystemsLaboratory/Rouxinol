#include <iostream>

using namespace std;

int main( void )
{
	int N, A, B, C, X;
	int Y[100];
	while(cin >> N >> A >> B >> C >> X,
		N | A | B | C | X)
	{
		for(int i=0; i < N; ++i) cin >> Y[i];
		int idx, count;
		idx = count = 0;
		if(X == Y[idx]) ++idx;
		while(idx < N) {
			++count;
			X = (A * X + B) % C;
			if(X == Y[idx]) ++idx;
			if(count > 10000) break;
		}
		if(count <= 10000)
			cout << count << endl;
		else
			cout << -1 << endl;
	}
	return 0;
}