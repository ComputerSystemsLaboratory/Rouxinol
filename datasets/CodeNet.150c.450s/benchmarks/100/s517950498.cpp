#include <iostream>
using namespace std;

int main(void)
{
	int N;
	long long accum = 1;

	cin >> N;

	while(N > 0){
		accum *= N;
		N--;
	}
	cout << accum << endl;


	return 0;
}