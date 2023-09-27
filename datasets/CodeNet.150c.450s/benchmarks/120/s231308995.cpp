#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <iterator>
#include <list>
#include <map>
#include <queue>
#include <bitset>
#include <fstream>
#include <cmath>
#include <ctime>
using namespace std;
typedef long long ll;

int C, R;
int rec(int, vector<vector<bool> >);
int count(vector<vector<bool> >);
vector<vector<bool> > reverserow(int, vector<vector<bool> >);


int main()
{
	while(cin>>C>>R && (C || R)){

		vector<vector<bool> > board(C, vector<bool>(R));

		for(int i = 0; i < C; i++){
			for(int j = 0; j < R; j++){
				int buf;
				cin>>buf;
				if(buf) board[i][j] = true;
				else	board[i][j] = false;
			}
		}

		cout<<rec(0, board)<<endl;

	}
}

int rec(int pos, vector<vector<bool> > board)
{
	if(pos == C) return count(board);
	return max(rec(pos + 1, board), rec(pos + 1, reverserow(pos, board)));
}

vector<vector<bool> > reverserow(int pos, vector<vector<bool> > board)
{
	for(int i = 0; i < board[pos].size(); i++)
		board[pos][i] = !board[pos][i];
	return board;
}

int count(vector<vector<bool> > board)
{
	int res = 0;

	for(int i = 0; i < board[0].size(); i++){
		int surface = 0, back = 0;
		for(int j = 0; j < board.size(); j++){
			if(board[j][i]) surface++;
			else			back++;
		}
		res += max(surface, back);
	}

	return res;
}