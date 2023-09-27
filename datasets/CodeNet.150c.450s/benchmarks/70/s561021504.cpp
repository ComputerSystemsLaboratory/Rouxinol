#include <iostream>
#include <vector>
using namespace std;
int main() {
	char w[7][8]={"Thurs","Fri","Satur","Sun","Mon","Tues","Wednes"};
	int mon[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int m,d,i,j,s;
    vector<int> a,b;
	while (cin >> m >> d) {
		if (m==0 || d==0) break;
		a.push_back(m); b.push_back(d);
	}
	for (i=0; i<a.size(); i++) {
     s=0;
	 for (j=0;j<a[i]-1;j++) s+=mon[j];
     s=(s+b[i]-1) % 7;
     cout << w[s] << "day" << endl;
	}
	return 0;
}