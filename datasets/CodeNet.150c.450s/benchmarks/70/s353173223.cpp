#include<iostream>
#include<vector>
using namespace std;

int main()
{
	string week[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	int day[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	vector<int> firstDay;
	int a, b;
	int i;

	firstDay.push_back(3);
	for (i = 0; i < 12; i++) {
		firstDay.push_back( (firstDay[i]+day[i])%7 );
	}

	while(cin>>a>>b, a||b) {
		cout<<week[ (firstDay[a-1] + b-1) % 7 ]<<endl;
	}

	return 0;
}