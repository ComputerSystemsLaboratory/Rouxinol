#include <iostream>
#include <deque>

using namespace std;

typedef deque <int> Deq;

bool flag;
int ball[10], a;

void dfs(Deq B, Deq C, int deep)
{
	if (flag) return;
	if (deep == 10){
		// cout << "B : " << B.size() << " / ";
		// for (int i = 0; i < B.size(); i++){
		// 	cout << B[i] << " ";
		// }
		// cout << endl << "C : " << C.size() << " / ";
		// for (int i = 0; i < C.size(); i++){
		// 	cout << C[i] << " ";
		// }
		// cout << endl;
		bool bf = true, cf = true;
		for (int i = 0; i+1 < B.size(); i++){
			if (B[i] > B[i+1]) bf = false;
		}
		for (int i = 0; i+1 < C.size(); i++){
			if (C[i] > C[i+1]) cf = false;
		}
		flag |= (bf && cf);
		return;
	}

	B.push_back(ball[deep]);
	dfs(B, C, deep + 1);
	B.pop_back();

	C.push_back(ball[deep]);
	dfs(B, C, deep + 1);
	C.pop_back();
	return;
}

int main(void)
{
	int n;
	cin >> n;
	while (n--){
		for (int i = 0; i < 10; i++){
			cin >> ball[i];
		}

		flag = false;
		Deq B, C;
		dfs(B, C, 0);

		if (flag) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}