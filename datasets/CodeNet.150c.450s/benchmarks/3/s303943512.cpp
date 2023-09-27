#include <iostream>

using namespace std;

int main(void)
{
    char str[1001], ord[8];
    int i, j, q, a, b;
    cin >> str >> q;
    
    for (i = 0; i < q; i++) {
	cin >> ord >> a >> b;
	if (ord[2] == 'i') {
	    for (j = a; j <= b; j++)
		cout << str[j];
	    cout << endl;
	} else if (ord[2] == 'p') {
	    char rep[b - a + 1];
	    cin >> rep;
	    for (j = 0; j < b - a + 1; j++)
		str[a + j] = rep[j];
	} else {
	    char buf[b - a + 1];
	    for (j = 0; j < b - a + 1; j++)
		buf[j] = str[a + j];
	    for (j = b - a; j >= 0; j--)
		str[b - j] = buf[j];
	}
    }

    return 0;
}