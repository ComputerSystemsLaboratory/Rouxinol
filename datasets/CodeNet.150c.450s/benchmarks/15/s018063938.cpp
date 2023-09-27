#include<iostream>
#include<vector>
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
		for(int j = 0; j < n; j++){
			if(t == S[j]){
				Count ++;
				break;
			}
		}
	}
	cout << Count << endl;
	return 0;
}