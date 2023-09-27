#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;


int main()
{
	int num;
	deque<int> train;
	while( cin >> num ) {
		if( num == 0 ) {	
			cout << train.back() <<endl;
			train.pop_back();
		}
		else {
			train.push_back( num );
		}
	
	}
	

	return 0;
}