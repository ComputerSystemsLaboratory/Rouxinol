#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

typedef struct {
	bool firstflag;
	bool endflag;
	int firsttime;
	int endtime;
}State;

const int Max = 100;
int map[Max + 1][Max + 1] = { 0 };
std::stack<int> st;
std::vector<State> state;


int main()
{
	int n, k, v, x;
	int cnt = 1;

	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		std::cin >> x >> k;
		for (int j = 1; j <= k; j++) {
			std::cin >> v;
			map[x][v] = 1;
		}
	}

	State s = { false,false,0,0 };
	for (int i = 0; i <= n; i++) {
		state.push_back(s);
	}

	while (1) {
		if (st.empty() == true) {
			if (state[1].endflag == true) {
				bool flag = false;
				for (int i = 1; i <= n; i++) {
					if (state[i].firstflag == false) {
						st.push(i);
						state[i].firstflag = true;
						state[i].firsttime = cnt;
						cnt++;
						flag = true;
						break;
					}
				}
				if (flag == true) {
					continue;
				}
				else {
					break;
				}
			}
			else {
				st.push(1);
				state[1].firstflag = true;
				state[1].firsttime = cnt;
				cnt++;
				continue;
			}
		}

		bool flag = false;
		for (int i = 1; i <= n; i++) {
			if (map[st.top()][i] == 1) {
				if (state[i].firstflag == false) {
					st.push(i);
					state[i].firstflag = true;
					state[i].firsttime = cnt;
					cnt++;
					flag = true;
					break;
				}
			}
		}
		if (flag == true) {
			continue;
		}
		else {
			state[st.top()].endflag = true;
			state[st.top()].endtime = cnt;
			cnt++;
			st.pop();
		}
	}

	for (int i = 1; i <= n; i++) {
		std::cout << i << " " << state[i].firsttime << " " << state[i].endtime << std::endl;
	}

	return 0;
}