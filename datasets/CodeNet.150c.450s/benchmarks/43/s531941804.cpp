#include <iostream>
using namespace	std;

int main ()
{
    int	N;
    while (cin >> N, N) {
	int n1, n2;
        int a =	0, b = 0;
        for (int i = 0; i < N; i++) {
            cin >> n1 >> n2;
            if (n1 > n2) a += n1 + n2;
            else if (n1 < n2) b	+= n1 +	n2;
            else {
                a += n1;
                b += n2;
            }
        }
        cout <<	a << " " << b << endl;
    }

    return 0;
}