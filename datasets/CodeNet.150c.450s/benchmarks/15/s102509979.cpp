#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int Count = 0;
	int n;
	cin >> n;
	vector<int> S;
	for(int i = 0; i < n; i++){
		int s;
		cin >> s;
		S.push_back(s);
	}
	int q;
	cin >> q;
	for(int i = 0; i < q; i++){
		int t;
		cin >> t;
		vector<int>::iterator it = find(S.begin(), S.end(), t);
		if(it != S.end()){
			Count++;
		}
	}
	cout << Count << endl;
	return 0;
}