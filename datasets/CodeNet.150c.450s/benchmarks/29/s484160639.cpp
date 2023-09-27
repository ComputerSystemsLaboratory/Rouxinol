#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define rep(i,n) FOR(i,0,n)
#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define vint vector<int>
#define vdouble vector<double>
#define vstring vector<string>
using namespace std;

#include<map>
#include<set>
#include<queue>

typedef long long ll;
typedef unsigned long long ull;

#include<list>

// size, push_back, pop_back, insert, erase

const int MAX_N = 3000000;
char cmd[MAX_N];
int arg[MAX_N];

int main() {

	int N;
	cin >> N;

	rep(i, N){

		// string command;
		// cin >> command;
		char command[20];
		scanf("%s", command);

		if (command[0] == 'i') {
			cmd[i] = 'I';
			cin >> arg[i];
		}
		else if (command[6] == 'F') {
			cmd[i] = 'F';
		}
		else if (command[6] == 'L') {
			cmd[i] = 'L';
		}
		else {
			cmd[i] = 'D';
			cin >> arg[i];
		}
	}
	
	list<int> lst;
	rep(i, N){
		if (cmd[i] == 'I'){ lst.push_front(arg[i]); }
		if (cmd[i] == 'D'){
			for (list<int>::iterator it = lst.begin(); it != lst.end(); it++){
				if (*it == arg[i])
				{
					lst.erase(it);
					break;
				}
			}
		}
		if (cmd[i] == 'F'){ lst.pop_front(); }
		if (cmd[i] == 'L'){ lst.pop_back(); }
	}

	for (list<int>::iterator it = lst.begin(); it != lst.end(); it++){
		if (it != lst.begin()) { cout << ' '; }
			cout << *it;
	}
	cout << endl;

}