#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct {
	int x;
	int y;
} POSITION;

int main() {
	int W, H;
	while (cin >> W >> H, W + H != 0) {
		bool board[W][H];
		vector<POSITION> movable;
		POSITION myPosition;
		int ans = 1;
		for (int y = 0; y < H; y++) {
			string str;
			cin >> str;
			for (int x = 0; x < W; x++) {
				switch (str[x]) {
				case '.': {
					board[x][y] = true;
					break;
				}
				case '@': {
					board[x][y] = false;
					myPosition.x = x;
					myPosition.y = y;
				}	
				case '#': {
					board[x][y] = false;
					break;
				}
				}
			}
		}
		if (myPosition.x - 1 >= 0 && board[myPosition.x - 1][myPosition.y]) {
			movable.push_back( {myPosition.x - 1, myPosition.y} );
			board[myPosition.x - 1][myPosition.y] = false;
			ans++;
		}
		if (myPosition.x + 1 < W && board[myPosition.x + 1][myPosition.y]) {
			movable.push_back( {myPosition.x + 1, myPosition.y} );
			board[myPosition.x + 1][myPosition.y] = false;
			ans++;
		}
		if (myPosition.y - 1 >= 0 && board[myPosition.x][myPosition.y - 1]) {
			movable.push_back( {myPosition.x, myPosition.y - 1} );
			board[myPosition.x][myPosition.y - 1] = false;
			ans++;
		}
		if (myPosition.y + 1 < H && board[myPosition.x][myPosition.y + 1]) {
			movable.push_back( {myPosition.x, myPosition.y + 1} );
			board[myPosition.x][myPosition.y + 1] = false;
			ans++;
		}

		while (movable.size() != 0) {
			POSITION sp = movable[movable.size() - 1];
			movable.pop_back();
			if (sp.x - 1 >= 0 && board[sp.x - 1][sp.y]) {
				movable.push_back( {sp.x - 1, sp.y} );
				board[sp.x - 1][sp.y] = false;
				ans++;
			}
			if (sp.x + 1 < W && board[sp.x + 1][sp.y]) {
				movable.push_back( {sp.x + 1, sp.y} );
				board[sp.x + 1][sp.y] = false;
				ans++;
			}
			if (sp.y - 1 >= 0 && board[sp.x][sp.y - 1]) {
				movable.push_back( {sp.x, sp.y - 1} );
				board[sp.x][sp.y - 1] = false;
				ans++;
			}
			if (sp.y + 1 < H && board[sp.x][sp.y + 1]) {
				movable.push_back( {sp.x, sp.y + 1} );
				board[sp.x][sp.y + 1] = false;
				ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}