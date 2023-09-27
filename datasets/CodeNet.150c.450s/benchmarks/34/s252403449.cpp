// 2011/02/12 Tazoe

#include <iostream>
using namespace std;

int main()
{
	int memo[31];
	memo[0] = 0;
	memo[1] = 1;
	memo[2] = 2;
	memo[3] = 4;
	for(int i=4; i<=30; i++)
		memo[i] = memo[i-1]+memo[i-2]+memo[i-3];

	while(true){
		int n;
		cin >> n;
		if(n==0)
			break;

		cout << ((memo[n]+9)/10+364)/365 << endl;
	}

	return 0;
}