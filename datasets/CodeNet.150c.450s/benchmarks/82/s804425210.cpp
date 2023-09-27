#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>

#define PI 3.14159265359
using namespace std;
class dice{
public:
	int d[6];
	void set(int n, int x){
		d[n] = x;
	}
	int get(int n){
		return d[n];
	}
	void rotate(char c){
		int tmp;
		if (c == 'W'){
			tmp = d[3];
			d[3] = d[0];
			d[0] = d[2];
			d[2] = d[5];
			d[5] = tmp;
		}
		else if (c == 'E'){
			tmp = d[5];
			d[5] = d[2];
			d[2] = d[0];
			d[0] = d[3];
			d[3] = tmp;
		}
		else  if (c == 'N'){
			tmp = d[0];
			d[0] = d[1];
			d[1] = d[5];
			d[5] = d[4];
			d[4] = tmp;
		}
		else {
			tmp = d[4];
			d[4] = d[5];
			d[5] = d[1];
			d[1] = d[0];
			d[0] = tmp;
		}
	}
};

int main(){
	int tmp, q, u, r;
	dice d;

	vector<vector<int> > v;
	vector<int> v1{ 0, 1, 5, 4, 0 };
	v.push_back(v1);
	reverse(v1.begin(), v1.end());
	v.push_back(v1);
	vector<int> v2{ 0, 3, 5, 2, 0 };
	v.push_back(v2);
	reverse(v2.begin(), v2.end());
	v.push_back(v2);
	vector<int> v3{ 3, 1, 2, 4, 3 };
	v.push_back(v3);
	reverse(v3.begin(), v3.end());
	v.push_back(v3);
	vector<int> ans{ 2, 3, 1, 4, 0, 5 };

	for (int i = 0; i < 6; i++){
		cin >> tmp;
		d.set(i, tmp);
	}
	cin >> q ;
	for (int k = 0; k < q; k++){
		cin >> u >> r;
		for (int i = 0; i < 6; i++){
			for (int j = 1; j < 5; j++){
				if (d.get(v[i][j - 1]) == u && d.get(v[i][j]) == r){
					cout << d.get(ans[i]) << endl;
					i = 6;
					j = 5;
				}
			}
		}
	}
}