#include <iostream>
using namespace std;
int main()
{

	int t[2], tp[2][4];

	for (int i = 0; i < 2; i++){
		t[i] = 0;
		for (int j = 0; j < 4; j++){
			cin >> tp[i][j];
			t[i] += tp[i][j];
		}
	}
	if (t[0]>=t[1]) cout << t[0] << endl;
	else cout << t[1] << endl;

}