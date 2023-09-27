#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main(){
	long n = 0;
	cin >> n;
	//n = 1;
	vector< pair<long, long> > a(n);
	string b = "";
	long c = 0;
	long d = 0;

	for (long i = 0; i < n; i++){
		cin >> b >> c;
		//b = "S";
		//c = 2;
		if (b == "S"){
			d = 0;
		}
		else if (b == "H"){
			d = 1;
		}
		else if (b == "C"){
			d = 2;
		}
		else if (b == "D"){
			d = 3;
		}
		else {
			cout << "something error occurred";
		}
		a[i] = make_pair(d, c);
		//cout << a[i].first << " " <<  a[i].second << endl; // OK
	}

	sort(a.begin(), a.end());
	//cout << a[0].first << " " << a[0].second << endl; // OK
	
	vector< pair <long, long> > f(52);
	for (long i = 0; i < 4; i++){
		for (long j = 0; j < 13; j++){
			f[i * 13 + j] = make_pair(i, j + 1);
			//cout << f[i * 13 + j].first << " " << f[i * 13 + j].second << endl; // OK
		}
	}

	vector<long> o(52, 0);
	for (long i = 0; i < 52; i++){
		for (long j = 0; j < n; j++){
			if (a[j] == f[i]){
				o[i] = 1;
				//cout << f[j].first << " " << f[j].second << endl; // NG
				//break;
			}
		}
	}

	for (long i = 0; i < 52; i++){
		//cout << o[i] << " ";
	}

	string e;
	for (long i = 0; i < 52; i++){
		if (o[i] != 1){
			switch (f[i].first){
				case 0:
					e = "S";
					break;
				case 1:
					e = "H";
					break;
				case 2:
					e = "C";
					break;
				case 3:
					e = "D";
					//cout << f[i].second << endl;
					break;
				default:
					e = "NULL";
					break;
			}
			cout << e << " " << f[i].second << endl;
		}
	}

	return 0;
}