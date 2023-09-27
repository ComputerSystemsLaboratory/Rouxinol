#include <iostream>

using namespace std;

int main( void )
{
	int n, m, p;
	int fd[100];
	while(cin >> n >> m >> p, n | m | p) {
		int sum = 0;
		for(int i=0; i < n; ++i) { cin >> fd[i]; sum += fd[i]; }
		if(!fd[m-1])
			cout << 0 << endl;
		else {
			cout << (((sum * 100) * (100 - p)) / 100) / fd[m-1] << endl;
		}
	}
	return 0;
}