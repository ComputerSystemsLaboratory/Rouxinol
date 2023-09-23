#include <iostream>

using namespace std;

int main(int argc, char const* argv[])
{
	int n;
	unsigned long long answer[31];
	
	for( int i = 0;i < 31;i++ ){
		answer[i] = 0;
	}

	answer[0] = 1;
	for( int i = 0;i < 31;i++ ){
		if( i + 3 < 31 ) answer[i + 3] += answer[i];
		if( i + 2 < 31 ) answer[i + 2] += answer[i];
		if( i + 1 < 31 ) answer[i + 1] += answer[i];
	}
	while( cin >> n && n != 0 ){
		cout << answer[n] / 3650 + 1  << endl;
	}


	return 0;
}