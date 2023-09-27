#include <iostream>
#include <string>
using namespace std;

int top, S, E, W, N, bot;

void what(char c)
{
		int tmp;
		switch (c) {
				case 'S':
						tmp = top;
						top = N;
						N = bot;
						bot = S;
						S = tmp;
						break;
				case 'E':
						tmp = top;
						top = W;
						W = bot;
						bot = E;
						E = tmp;
						break;
				case 'W':
						tmp = top;
						top = E;
						E = bot;
						bot = W;
						W = tmp;
						break;
				case 'N':
						tmp = top;
						top = S;
						S = bot;
						bot = N;
						N = tmp;
						break;
				case 'R':
						tmp = S;
						S = E;
						E = N;
						N = W;
						W = tmp;
						break;
		}
}

int main()
{
		int i, j, q;
		string op;
		cin >> top >> S >> E >> W >> N >> bot;
		cin >> q;
		int t[q], f[q], ans[q];
		for (i=0; i<q; i++) cin >> t[i] >> f[i];

		for (i=0; i<q; i++) {
				op = "NNNNWEE";
				for (j=0; j<op.size(); j++) {
						if (top==t[i]) break;
						else what(op[j]);
				}
				op = "RRRR";
				for (j=0; j<op.size(); j++) {
						if (S==f[i]) break;
						else what(op[j]);
				}
				cout << E << "\n";
		}

}