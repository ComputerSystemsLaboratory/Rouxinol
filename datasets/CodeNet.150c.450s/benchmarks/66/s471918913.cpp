#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	int n, m;
	vector<string> U;
	string T;
	int Lock = 1;

	cin >> n;
	for (int i = 0; i < n; i++){
		string u;
		cin >> u;
		U.push_back(u);
	}
	cin >> m;
	for (int i = 0; i < m; i++){
		cin >> T;
		int flg = 0;
		for (int j = 0; j < U.size(); j++){
			if (T == U[j]){
				if (Lock == 0){
					cout << "Closed by " << T << endl;
					Lock = 1;
				}
				else{
					cout << "Opened by " << T << endl;
					Lock = 0;
				}
				flg = 1;
				break;
			}
		}
		if (flg == 0) cout << "Unknown " << T << endl;
	}
	return 0;
}