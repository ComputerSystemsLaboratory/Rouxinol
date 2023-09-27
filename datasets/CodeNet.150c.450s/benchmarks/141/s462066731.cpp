#include<iostream>
#include<cmath>

using  namespace std;

int main() {
	double xa, ya, xb, yb, xc, yc, xp, yp;
	while (cin >> xa >> ya >> xb >> yb >> xc >> yc >> xp >> yp) {
		/*外積で正負で判定する*/
		double one, two, three;
		one = (xc - xp)*(ya - yc) - (yc - yp)*(xa - xc);
		two = (xb - xp)*(yc - yb) - (yb - yp)*(xc - xb);
		three = (xa - xp)*(yb - ya) - (ya - yp)*(xb - xa);
		double t_one = abs(one), t_two = abs(two), t_three = abs(three);
		one = one / t_one;
		two = two / t_two;
		three = three / t_three;
		if (one == two && one == three && two == three) {

			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}
