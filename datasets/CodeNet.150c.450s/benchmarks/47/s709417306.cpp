#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
#ifdef CIN
	ifstream cin("input.txt");
	ofstream cout("output.txt");
#endif

	int x, y, H, W, r;

	cin >> W >> H >> x >> y >> r;

	if (r <= x && x <= (W - r) && r <= y && y <= (H - r)) cout << "Yes" << endl;
	else cout << "No" << endl;



	return 0;
}