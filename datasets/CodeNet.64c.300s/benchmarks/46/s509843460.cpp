#include <iostream>
#define ERA_MAX	1000000
#define ROO_MAX 1000
using namespace std;


bool Eratos[ERA_MAX];

int main()
{
	Eratos[0] = Eratos[1] = false;
	for (int i = 2; i < ERA_MAX; i++)
		Eratos[i] = true;
	for (int i = 2; i < ROO_MAX; i++) {
		if (Eratos[i]) {
			for (int j = i * 2; j < ERA_MAX; j += i) {
				if(Eratos[j])
					Eratos[j] = false;
			}
		}
	}
	int a, d, n;
	while (cin >> a >> d >> n, a || d || n) {
		int ite = 0, res = a;
		while ( 1 ) {
			if (Eratos[res])
				ite++;
			if (ite == n)
				break;
			res += d;
		}
		cout << res << endl;
	}
	return 0;
}