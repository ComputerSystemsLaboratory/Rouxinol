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
		}
}

int main()
{
		int i;
		string op;
		cin >> top >> S >> E >> W >> N >> bot;
		cin >> op;
		for (i=0; i<op.size(); i++) {
				what(op[i]);		}
		cout << top << "\n";
}