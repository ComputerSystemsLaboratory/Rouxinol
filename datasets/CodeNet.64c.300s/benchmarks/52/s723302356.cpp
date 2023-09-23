#include <iostream>

using namespace std;

int answer;

void saiki( int number, int sum, int t )
{

	if( number == 0 ){
		if( sum == 0 ){
			answer++;
			return;
		} else {
			return;
		}
	}

	if( sum < 0 ) return;

	if( t > 9 ) return;


	saiki( number - 1, sum - t, t + 1 );

	saiki( number, sum, t + 1 );

}

int main(void)
{
	int number, sum;

	while( cin >> number >> sum && ( number || sum ) ){
		answer = 0;
		saiki( number, sum, 0 );
		cout << answer << endl;
	}
	return 0;
}