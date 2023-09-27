#include <iostream>
#include<vector>
using namespace std;

int main(){
	
	int n,m;
	cin >> n >> m;
	vector< vector<int> > a ( n, vector<int>(m) );  //????????????????????????????????????????????°????????????
	vector<int> b(m), c(n);


	for(int i = 0; i < a.size(); i++){
		for(int j = 0; j < b.size(); j++){
			cin >> a[i][j];
		}
	}

	for(int j = 0; j < b.size(); j++){
		cin >> b[j];
	}

	for(int i = 0; i < a.size(); i++){
		c[i] = 0;
		for(int j = 0; j < b.size(); j++){
			c[i] += a[i][j] * b[j];
		}
	}

	for(int i = 0; i < a.size(); i++){
		cout << c[i] << endl;
	}

	return 0;
}