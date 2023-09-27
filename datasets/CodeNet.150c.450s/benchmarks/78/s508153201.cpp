#include <iostream>
#include <cstring>

#define min(a, b) ((a < b) ? a : b)

using namespace std;

const int SIZE = 181 + 1;
const int MAX = 1000000;

int T[SIZE];
int cost1[MAX], cost2[MAX];

int main( void )
{	
	for(int i=0; i < SIZE; ++i) T[i] = i * (i + 1) * (i + 2) / 6;

	memset(cost1, 9, sizeof(cost1));
	for(int i=0; i < MAX; ++i) cost2[i] = MAX;
	cost1[0] = cost2[0] = 0;
	for(int i=0; i < MAX; ++i) {
		if(cost1[i] < 6) {
			for(int j=0; j < SIZE; ++j) {
				if(i + T[j] < MAX)
					cost1[i + T[j]] = min(cost1[i + T[j]], cost1[i] + 1);
			}
		}
		if(cost2[i] < MAX) {
			for(int j=0; j < SIZE; ++j) {
				if(T[j] & 1) {
					if(i + T[j] < MAX)
						cost2[i + T[j]] = min(cost2[i + T[j]], cost2[i] + 1);
				}
			}
		}
	}
	int n;
	while(cin >> n, n) {
		cout << cost1[n] << ' ' << cost2[n] << endl;
	}
	return 0;
}