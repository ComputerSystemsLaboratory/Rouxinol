#include <iostream>

using namespace std;

int main(void)
{
	int e;
	while(cin >> e && e > 0){
		int mini=e;
		for(int z=0;z*z*z<=e;z++){
			int z3 = z*z*z;
			int y=0, x;
			while((x = e-z3-y*y) >= 0){
				mini = min(mini, x+y+z);
				y++;
			}
		}
		cout << mini << endl;
	}
	return 0;
}
