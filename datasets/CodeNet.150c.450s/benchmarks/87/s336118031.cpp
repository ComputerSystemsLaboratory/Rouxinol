#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/** Problem1193 : Chain Disappearance Puzzle **/

int main()
{
	int H;
	while (cin>>H, H) {
		vector<vector<int> > board(H, vector<int>(5));
		int ans=0;
		
		for (int y=0; y<H; y++) {
			for (int x=0; x<5; x++) {
				cin>>board[y][x];
			}
		}
		
		
		while (true) {
			bool update=false;

			// erase
			for (int y=0; y<H; y++) {
				for (int x=0; x<5; x++) {
					int count = 1;
					if (board[y][x]<0) continue;
					
					for (int tx=x+1; tx<5; tx++) {
						if (board[y][tx] == board[y][tx-1])	
							count++;
						else
							break;
					}
					
					if (count>=3) {
						update = true;
						ans += count*board[y][x];
						for (int i=0; i<count; i++) {
							board[y][x+i] = -1;
						}
					}
				}
			}
		
			// drop
			for (int x=0; x<5; x++) {
				for (int y=H-2; y>=0; y--) {
					if (board[y][x]>=0) {
						int ty=y;
						while (ty+1<H && board[ty+1][x]<0 && board[ty][x]>=0) {
							swap(board[ty+1][x], board[ty][x]);
							ty++;
						}
					}
				}
			}
			
			if (!update) break;
		}
		
		cout << ans << endl;
	}
}