#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<int> r;
	string d[7]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
	while (true)
	{
		int m,d;
		cin >> m >> d;
		if (m==0)break;
		if (m<3){m+=12;d-=2;}
		r.push_back((5+d+(13*(m+1))/5)%7);
	}
	for (int i=0; i<r.size(); i++)
	{
		cout << d[r[i]] << endl;
	}
	return 0;
}