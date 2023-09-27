#include <iostream>
#include <string>
using namespace std;

int main()
{
	string days[]={
		"Mon",
		"Tues",
		"Wednes",
		"Thurs",
		"Fri",
		"Satur",
		"Sun"
	};
	int cal[12][31]={{0}};
	int today=3;
	for (int i=0; i<12; i++) {
		for (int j=0; j<31; j++) {
			cal[i][j]=today;
			++today%=7;
			if (i==3 || i== 5 || i==8 || i==10) {
				if (j==29) {
					break;
				}
			}
			else if (i==1) {
				if (j==28) {
					break;
				}
			}
		}
	}
	int a,b;
	for (cin >> a >> b; a; cin >> a >> b) {
		cout << days[cal[a-1][b-1]] << "day" << endl;
	}	
}