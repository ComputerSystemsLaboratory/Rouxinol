#include<iostream>
#include<map>
using namespace std;

int main() {
	map<int,int> data;
	int n,max;
	while (cin >> n) {
		data[n]++;
	}
	max = 0;
	for (int i = 0; i < data.size();i++)
		if( data[i] > max )
			max = data[i];
	
	map<int,int>::iterator it = data.begin();
	while (it != data.end()) {
		if ( (*it).second == max )
			cout << (*it).first << endl;
		it++;
	}
	return 0;
}