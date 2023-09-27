#define _CRT_SECURE_NO_WARNINGS

#include<fstream>
#include<iostream>
#include<string>
#include<iomanip>
#include<list>
#include<math.h>
#include<stack>
#include<queue>
#include<vector>

using namespace std;

int h, w, n;
vector<pair<int, int>> map;
vector<pair<int, int>> List;

queue<int> q;

int loop(int start, int end) {
	for (int i = 0; i < h * w; i++) {
		map[i].second = 0;
	}
	while (!q.empty()) {
		q.pop();
	}
	queue<int> tmp;
	q.push(start);
	for (int i = 1; true; i++) {
		while (!q.empty()) {
			int front = q.front();
			q.pop();
			map[front].second = -1;

			if (front / w != 0) {
				if (map[front - w].first != 'X' && map[front - w].second != -1) {
					if (front - w == end) {
						return i;
					}
					map[front - w].second = -1;
					tmp.push(front - w);
				}
			}

			if (front / w != h - 1) {
				if (map[front + w].first != 'X' && map[front + w].second != -1) {
					if (front + w == end) {
						return i;
					}
					map[front + w].second = -1;
					tmp.push(front + w);
				}
			}

			if (front % w != 0) {
				if (map[front - 1].first != 'X' && map[front - 1].second != -1) {
					if (front - 1 == end) {
						return i;
					}
					map[front - 1].second = -1;
					tmp.push(front - 1);
				}
			}

			if (front % w != w - 1) {
				if (map[front + 1].first != 'X' && map[front + 1].second != -1) {
					if (front + 1 == end) {
						return i;
					}
					map[front + 1].second = -1;
					tmp.push(front + 1);
				}
			}
		}
		swap(q, tmp);
	}
}

void set_map() {
	pair<int, int> map_p;
	pair<int, int> list_p;
	for (int i = 0; i < h; i++) {
		string tmp;
		cin >> tmp; // map状況
		for (int j = 0; j < w; j++) {
			map_p.first = tmp[j]; // map状況
			map_p.second = 0; //queのための値
			map.push_back(map_p);
			if (map_p.first != 'X' && map_p.first != '.') {
				list_p.first = i * w + j; // map上の何番目なのか
				if (map_p.first == 'S') { // 何番目のゴールなのか
					list_p.second = 0;
				} else {
					list_p.second = map_p.first - '0';
				}
				vector<pair<int, int>>::iterator ite = List.begin();
				int k = 0;
				for (; k < List.size(); ite = std::next(ite, 1), k++) {
					if (list_p.second < List[k].second) {
						List.insert(ite, list_p);
						break;
					}
				}
				if (k == List.size()) {
					List.push_back(list_p);
				}
			}
		}
	}
}

int main(int argc, char **argv){

	cin >> h >> w >> n;
	set_map();
	int count = 0;
	for (int i = 1; i < List.size(); i++) {
		count += loop(List[i - 1].first, List[i].first);
	}
	cout << count << endl;
	return 0;
}