#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdio>
using namespace std;

struct DOOR{
	string id;
};

int find_door(string id, vector<DOOR> doors) {
	for (int i = 0; i < doors.size(); i++) {
		if (id == doors[i].id)
			return i;
	}
	return -1;
}

int main(void) {
	int N;
	cin >> N;
	cin.ignore();
	vector<DOOR> door(N);
	for (int i = 0; i < N; i++) {
		getline(cin, door[i].id);
	}
	
	bool isOpen = false;
	int M;
	cin >> M;
	cin.ignore();
	for (int i = 0; i < M; i++) {
		string id;
		getline(cin, id);
		int index = find_door(id, door);
		if (index != -1) {
			if (isOpen) {
				cout << "Closed by " << id << endl;
				isOpen = false;
			}else {
				cout << "Opened by " << id << endl;
				isOpen = true;
			}
		}else {
			cout << "Unknown " << id << endl;
		}
	}

	return 0;
}