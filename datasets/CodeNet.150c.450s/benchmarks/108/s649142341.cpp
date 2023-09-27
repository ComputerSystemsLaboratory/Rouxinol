#include <iostream>
#include <queue>
#include <vector>

const int Max = 100;
int map[Max + 1][Max + 1];

typedef struct{
	bool startflag;
	int distance;
}State;

int main()
{
	int n, k, l, temp;
	std::queue<int> q;
	std::vector<State> state;

	for (int i = 1; i < Max + 1; i++){
		for (int j = 1; j < Max + 1; j++){
			map[i][j] = 0;
		}
	}

	std::cin >> n;
	for (int i = 1; i <= n; i++){
		std::cin >> k >> l;
		for (int j = 1; j <= l; j++){
			std::cin >> temp;
			map[k][temp] = 1;
		}
	}

	State s = { false, 0 };
	for (int i = 0; i <= n; i++){
		state.push_back(s);
	}

	int d = 0;
	while (1){
		if (q.empty() == true){
			bool f = false;
			for (int i = 1; i <= n; i++){
				if (state[i].startflag == false){
					if (i != 1){
						state[i].startflag = true;
						state[i].distance = -1;
						continue;
					}
					q.push(i);
					state[i].startflag = true;
					d = 0;
					state[i].distance = d;
					d++;
					f = true;
					break;
				}
			}
			if (f == false){
				break;
			}
		}
		int size = q.size();
		for (int j = 0; j < size; j++){
			for (int i = 1; i <= n; i++){
				if (map[q.front()][i] == 1 && state[i].startflag == false){
					q.push(i);
					state[i].startflag = true;
					state[i].distance = d;
				}
			}
			q.pop();
		}
		d++;
	}

	for (int i = 1; i <= n; i++){
		std::cout << i << " " << state[i].distance << std::endl;
	}

	return 0;
}