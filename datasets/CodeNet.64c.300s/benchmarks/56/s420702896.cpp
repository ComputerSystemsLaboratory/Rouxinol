#include <iostream>
#include <cstdlib>

using namespace std;

int main( void )
{
	int n;
	cin >> n;
	while(n--) {
		int y, m, d;
		cin >> y >> m >> d;
		
		int count = 0;
		int md[] = {19, 20};
		if(y%3)	{ // ３で割れない年
			count += (md[m++ % 2] - d + 1);				// 今月分
			while(m <= 10) { count += md[m % 2]; ++m; }	// 残った今年分
		}
		else{ // ３で割れる年
			count += (20 - d + 1);				//今月分
			++m;
			while(m <= 10) { count += 20; ++m; }// 残った今年分
		}

		const int mod3 = 20 * 10;			// ３で割れる年の日数
		const int nmod = 20 * 5 + 19 * 5;	// ３で割れない年の日数
		// 残りの年数分
		for(int i=y+1; i < 1000; ++i) {
			if(i%3) count += nmod;  // ３で割れない年
			else	count += mod3;  // ３で割れる年
		}

		cout << count << endl;
	}
	return 0;
}