#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector <int> all;
	int x;
	for( int i=0 ; i<10 ; i++ ){
		cin >> x;
		all.push_back(x);
	}
	sort(all.begin() , all.end());
	int j = 0;
	for( int i=all.size()-1 ; i>=0 && j<3 ; i-- , j++ )
		cout << all[i] << endl;
	return 0;
}