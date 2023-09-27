#include<iostream>
#include<algorithm>
#include<queue>
#include<utility>
#include<vector>

using namespace std;



int main() {
	int cnt_people, cnt_relation;
	queue<int> q;
	int cnt_equiv = 0;
	cin >> cnt_people >> cnt_relation;

	vector<int> *adjacent=new vector<int>[cnt_people];
	int* equiv = new int[cnt_people];
	for (int i = 0;i < cnt_people;i++) {
		equiv[i] = -1;
	}
	int tmp1, tmp2;
	for (int i = 0;i < cnt_relation;i++) {
		cin >> tmp1>>tmp2;
		adjacent[tmp1].push_back(tmp2);
		adjacent[tmp2].push_back(tmp1);
	}
	for (int i = 0;i < cnt_people;i++) {
		if (equiv[i] == -1) {
			cnt_equiv++;
			equiv[i] = cnt_equiv;
			q.push(i);
			while (!q.empty()) {
				tmp1 = q.front();
				q.pop();
				for (int j = 0;j < adjacent[tmp1].size();j++) {
					if (equiv[adjacent[tmp1][j]] == -1) {
						equiv[adjacent[tmp1][j]] = cnt_equiv;
						q.push(adjacent[tmp1][j]);
					}
				}
			}
		}
	}
	int cnt_question;
	cin >> cnt_question;
	for (int i = 0;i < cnt_question;i++) {
		cin >> tmp1 >> tmp2;
		if (equiv[tmp1] == equiv[tmp2]) {
			cout << "yes\n";
		}
		else {
			cout << "no\n";
		}
	}
}

