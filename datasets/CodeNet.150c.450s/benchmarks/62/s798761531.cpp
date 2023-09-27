#include <iostream>
using namespace std;
int main(){
	int x, y, z, temporariness;
	cin >> x >> y >> z;
	if (x > y){
		temporariness = x;
		x = y;
		y = temporariness;
	}
	if (y > z){
		temporariness = y;
		y = z;
		z = temporariness;
	}
	if (x > y){
		temporariness = x;
		x = y;
		y = temporariness;
	}
	cout << x << " " << y << " " << z << endl;
	return 0;
}