#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	while(true) {

		int e;

		scanf("%d", &e);
		if(e == 0)
			break;

		int m = e;

		for(int z = 0; z * z * z <= e; ++z) {

			int z3 = z * z * z;

			for(int y = 0; y * y + z3 <= e; ++y) {

				int y2 = y * y;
				int x = e - z3 - y2;

				m = min(m, (x + y + z));
			}
		}

		printf("%d\n", m);
	}

	return 0;
}