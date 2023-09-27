#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<numeric>
#include<climits>
#include<ctime>
#include<cstring>
#include<sstream>
#define REP(i,p,n) for(int i=p;i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)
#define rep_split(tok,a_str,re) for(char *tok = strtok((char *)a_str.c_str(),re); tok != NULL; tok = strtok(NULL,re))
#define ALL(c) (c).begin(), (c).end()
#define dump(a) cerr << #a << "=" << (a) << endl
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;
template<class T> void chmin(T &t, T f) { if (t > f) t = f; } //t=min
template<class T> void chmax(T &t, T f) { if (t < f) t = f; } //t=max
using namespace std;


int N;
int puzzle[5][11];

int deletePuzzle()
{
	int get_p = 0;

	/*
	cout << "---- remove start ----" << endl;
	rep(y,N) {
		rep(x,5) { 
			cout << puzzle[x][y] << " ";
		}
		cout << endl;
	}
	cout << endl;
	*/

	rep(y,N) {
		int back_p = 0;
		int the_p = 0;
		set<int> remove_xs;

		//3つ以上一致しているかを見る
		rep(x,5)
		{
			if (puzzle[x][y] == back_p && puzzle[x][y] > 0)
			{
				/*
				cout << "---------------" << endl;
				for (set<int>::iterator iti = remove_xs.begin(); iti != remove_xs.end(); iti++) { cout << *iti; }
				cout << endl;
				*/

				remove_xs.insert(x-1); //重複していたら挿入しない
				remove_xs.insert(x);
				if (remove_xs.size() >= 3) { //3回以上
					the_p = puzzle[x][y];
				}
			}
			else {
				//玉が異なっていて，既に3つ以上揃っているとき，これ以上は揃わないのでbreak;
				if (remove_xs.size() >= 3) {
					break;
				}
				else {
					remove_xs.clear();
				}
			}
			back_p = puzzle[x][y];
		}

		if (remove_xs.size() >= 3)
		{ 
			get_p += the_p * remove_xs.size(); //ポイント換算
			for (set<int>::iterator it = remove_xs.begin(); it != remove_xs.end(); it++) {
				puzzle[(*it)][y] = 0;
			}
		} 

	}

	/*
	cout << "---- remove end ----" << endl;
	rep(y,N) {
		rep(x,5) { 
			cout << puzzle[x][y] << " ";
		}
		cout << endl;
	}
	cout << endl;
	*/


	return get_p;
}

void dropPuzzle()
{
	rep(x,5) {
		vector<int> real_ps;
		rep(y,N) {
			if (puzzle[x][y] > 0) { real_ps.push_back(puzzle[x][y]); } //点数を吸い取る
			puzzle[x][y] = 0; //全部一回削除
		}
		int the_N = real_ps.size();
		rep(y,the_N) { //the_N分たどる
			puzzle[x][y+(N-the_N)] = real_ps[y];
		}
	}
	
	//デバッグ
	/*
	rep(y,N) {
		rep(x,5) { 
			cout << puzzle[x][y] << " ";
		}
		cout << endl;
	}
	*/
}

int main()
{
	int all_p;
	while(true) {
		cin >> N;
		all_p = 0;

		if (N == 0) { break; }
		rep(y,11) {
			rep(x,5) {
				puzzle[x][y] = 0;
			}
		}

		rep(y,N) {
			rep(x,5) {
				cin >> puzzle[x][y];
			}
		}

		/*
		rep(y,N) {
			rep(x,5) {
				cout << puzzle[x][y];
			}
			cout << endl;
		}
		cout << endl;
		*/

		//while get_p=0まで
		while(true) {
			int get_p = deletePuzzle();
			if (get_p == 0) { break; }
			all_p += get_p;
			dropPuzzle();
			//cout << endl;
		}

		cout << all_p << endl;
		//cout << endl;
	}
	return 0;
}