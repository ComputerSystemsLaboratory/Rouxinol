#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int Y[10001];
	int N, A, B, C, X;
	while(cin >> N >> A >> B >> C >> X, N || A || B || C || X) {
		for (int i = 0; i < N; i++) {
			int buf; cin >> buf;
			Y[i] = buf;
		}
		int x = X;
		int frame = -1;
		int stopped = 0;
		do{
			++frame;
			if (x == Y[stopped]) {
				++stopped;
			}
			x = (A * x + B) % C;
			if (frame > 10000) {
				frame = -1;
				break;
			}
		}while(stopped < N);
		cout << frame << endl;
	}
	return 0;
}