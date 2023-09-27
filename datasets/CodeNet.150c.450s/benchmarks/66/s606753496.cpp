#include <iostream>
#include <vector>
#include <string>
using namespace std;



int main()
{
	int N, M;
	vector<string> U;
	bool flag = true;
	string str;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> str;
		U.push_back(str);
	}

	cin >> M;

	for (int i = 0; i < M; i++) {
		cin >> str;

		bool f = false;

		for (int j = 0; j < N; j++) {
			if (str == U[j]) {
				if (flag == true) {
					cout << "Opened by " << U[j] << endl;
					flag = false;
				}
				else {
					cout << "Closed by " << U[j] << endl;
					flag = true;
				}
				f = true;
				break;
			}
		}

		if (f == false) {
			cout << "Unknown " << str << endl;
		}
	}

	return 0;
}