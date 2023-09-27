#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(){

	int n,m,buf;
	vector < vector <int> >  A;
	vector <int> b, c;

	cin >> n >> m;

	A.resize(n);

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> buf;
			A[i].push_back(buf);
		}
	}

	for (int i = 0; i < m; i++){
		cin >> buf;
		b.push_back(buf);
	}

	for (int i = 0; i < n; i++){
		buf = 0;
		for (int j = 0; j < m; j++){
			buf += A[i][j] * b[j];
		}		
		c.push_back(buf);
		cout << c[i] << endl;
	}



	return 0;
}