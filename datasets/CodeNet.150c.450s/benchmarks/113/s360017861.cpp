#include <iostream>
using namespace std;
int main () {
	int x ,i;
	cin >> x;
	i = 0;
	while (x>0) {
		i=i+1;
		cout << "Case " << i << ": " << x << endl;
		cin >> x;
    } 
    return 0;
}
