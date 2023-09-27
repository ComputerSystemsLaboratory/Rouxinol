#include<iostream>
using namespace std;

int main()
{
	while (true){
		int n;
		cin >> n;
		if (!n) break;
		char order[128];
		for (int i = 0; i < 128; i++) order[i] = i;
		for (int i = 0; i < n; i++){
			char in1, in2;
			cin >> in1 >> in2;
			order[in1] = in2;
		}
		int m;
		cin >> m;
		for (int i = 0; i < m; i++){
			char in;
			cin >> in;
			cout << order[in];
		}
		cout << endl;
	}
	return 0;
}