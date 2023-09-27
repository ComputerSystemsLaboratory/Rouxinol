#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

struct prcs
{
	string name;
	int time;
	int endTime;
};

int main() {

	int n, q;
	cin >> n >> q;

	int ttl = 0;
	vector<prcs> pary;
	queue<prcs>  que;


	for (int i = 0; i < n; i++) {
		prcs pr;
		cin >> pr.name >> pr.time;
		que.push(pr);
	}


	while (!que.empty()) {
		prcs pr = que.front();
		que.pop();

		if (pr.time > q) {
			pr.time -= q;
			que.push(pr);
			ttl += q;
		}
		else {
			ttl += pr.time;
			pr.endTime = ttl ;
			pary.push_back(pr);
		}
	}


	for (int i = 0;i < n;i++) {
		prcs pp = pary[i];
		cout << pp.name << " " << pp.endTime << endl;
	}

	return 0;
}

