#include <iostream>
#include <vector>
using namespace std;

int main(){
	long r, c;
	cin >> r >> c;
	//r = 2;
	//c = 2;
	vector< vector<long> > sp(r);
	for (long i = 0; i < r; i++){
		sp[i].resize(c);
	}
	for (long i = 0; i < r; i++){
		for (long j = 0; j < c; j++){
			cin >> sp[i][j];
		}
	}
	vector<long> rsum(r, 0);
	vector<long> csum(c, 0);
	for (long i = 0; i < r; i++){
		for (long j = 0; j < c; j++){
			rsum[i] += sp[i][j];
		}
	}
	for (long i = 0; i < c; i++){
		for (long j = 0; j < r; j++){
			csum[i] += sp[j][i];
		}
	}
	long sum = 0;
	for (long i = 0; i < r; i++){
		sum += rsum[i];
	}
	for (long i = 0; i < r; i++){
		for (long j = 0; j < c; j++){
			cout << sp[i][j] << " ";
		}
		cout << rsum[i] << endl;
	}
	for (long i = 0; i < c; i++){
		cout << csum[i] << " ";
	}
	cout << sum << endl;
	/*
	vector< vector<long> > newsp(r + 1);
	for (long i = 0; i < r + 1; i++){
		newsp[i].resize(c + 1);
	}
	for (long i = 0; i < r + 1; i++){
		for (long j = 0; j < c + 1; j++){
			if (i < r && j < c) newsp[i][j] = sp[i][j];
			else if (i = r && j < c) newsp[i][j] = csum[j];
			else if (j = c && i < r) newsp[i][j] = rsum[i];
			else newsp[i][j] = sum;
		}
	}
	for (long i = 0; i < r + 1; i++){
		for (long j = 0; j < c + 1; j++){
			cout << newsp[i][j];
		}
		cout << endl;
	}
	*/
	return 0;
}