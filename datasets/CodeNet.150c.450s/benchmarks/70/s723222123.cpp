#include <bits/stdc++.h>
using namespace std;

const int INF = 1e+9 * 2;
double eps = 1e-10;

string days[] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};
int main() {
	int m, d;
	while(cin >> m >> d && (m || d)){
		int cnt = 0;
		for(int i = 1; i <= 12; ++i){
			for(int j = 1; j <= 31; ++j){
				if(m == i && j == d){
					cout << days[cnt % 7] << endl;
					goto end;
				}
				cnt++; 
				if(i == 2 && j == 29)
					break;
				else if((i == 4 || i == 6 || i == 9 || i == 11) && j == 30)
					break;
			}
		}
		end:;
	}
	return 0;
}