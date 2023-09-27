#include<iostream>
#include<math.h>
using namespace std;

double abs_(double a)
{
	if (a > 0) return a;
	else return -a;
}

int main(){
	int n;
	cin >> n;
	while (n--){
		double x1, y1, x2, y2, x3, y3, x4, y4;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		double a = (y2 - y1)*(x4 - x3);
		double b = (y4 - y3)*(x2 - x1);
		if (abs_(a - b) < 0.0000000001){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
