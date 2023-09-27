#include <bits/stdc++.h>
#include <vector>
using namespace std;
double x_1, x_2, x_3, y_1, y_2, y_3, x_p, y_p, c;
int n,hasil;
int main(){
	while(cin >> x_1 >> y_1 >> x_2 >> y_2 >> x_3 >> y_3 >> x_p >> y_p){
		hasil = 0;
		if((x_3*y_2)-(x_3*y_1)-(x_1*y_2) > (x_2*y_3)-(x_1*y_3)-(x_2*y_1)){
			if((x_p*y_2)-(x_p*y_1)-(x_1*y_2) > (x_2*y_p)-(x_1*y_p)-(x_2*y_1)){
				hasil++;
			}
		}
		else if((x_3*y_2)-(x_3*y_1)-(x_1*y_2) < (x_2*y_3)-(x_1*y_3)-(x_2*y_1)){
			if((x_p*y_2)-(x_p*y_1)-(x_1*y_2) < (x_2*y_p)-(x_1*y_p)-(x_2*y_1)){
				hasil++;
			}
		}
		if((x_2*y_3)-(x_2*y_1)-(x_1*y_3) > (x_3*y_2)-(x_1*y_2)-(x_3*y_1)){
			if((x_p*y_3)-(x_p*y_1)-(x_1*y_3) > (x_3*y_p)-(x_1*y_p)-(x_3*y_1)){
				hasil++;
			}
		}
		else if((x_2*y_3)-(x_2*y_1)-(x_1*y_3) < (x_3*y_2)-(x_1*y_2)-(x_3*y_1)){
			if((x_p*y_3)-(x_p*y_1)-(x_1*y_3) < (x_3*y_p)-(x_1*y_p)-(x_3*y_1)){
				hasil++;
			}
		}
		if((x_1*y_3)-(x_1*y_2)-(x_2*y_3) > (x_3*y_1)-(x_2*y_1)-(x_3*y_2)){
			if((x_p*y_3)-(x_p*y_2)-(x_2*y_3) > (x_3*y_p)-(x_2*y_p)-(x_3*y_2)){
				hasil++;
			}
		}
		if((x_1*y_3)-(x_1*y_2)-(x_2*y_3) < (x_3*y_1)-(x_2*y_1)-(x_3*y_2)){
			if((x_p*y_3)-(x_p*y_2)-(x_2*y_3) < (x_3*y_p)-(x_2*y_p)-(x_3*y_2)){
				hasil++;
			}
		}
		if(hasil == 3)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}