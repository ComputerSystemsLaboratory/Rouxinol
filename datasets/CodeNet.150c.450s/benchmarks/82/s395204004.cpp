#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int dice(int a, int b){
		int count = 0;
		string tpat[3];
		tpat[0] = "12651";
		tpat[1] = "23542";
		tpat[2] = "13641";
		int ret[3];
		ret[0] = 3;
		ret[1] = 1;
		ret[2] = 5;
		for(int i = 0; i < 3; i++){
				for(int j = 0; j < 4; j++){
						if(tpat[i][j] - '0' == a && tpat[i][j+1] - '0' == b){
								return ret[i];
						}
				}
		}
		tpat[0] = "15621";
		tpat[1] = "24532";
		tpat[2] = "14631";
		for(int i = 0; i < 3; i++){
				for(int j = 0; j < 4; j++){
						if(tpat[i][j] - '0' == a && tpat[i][j+1] - '0' == b){
								return 7 - ret[i];
						}
				}
		}

}

int main(int argc, char const* argv[])
{
	int d[6];
	for(int i = 0; i < 6; i++){
			cin >> d[i];
	}
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
			int a, b;
			cin >> a >> b;
			int a1, b1;
			for(int i = 0; i < 6; i++){
					if(d[i] == a)a1 = i;
					if(d[i] == b)b1 = i;
			}
			cout << d[dice(a1+1, b1+1)-1] << endl;
	}
	return 0;
}

