#include <iostream>

using namespace std;

int main(void)
{
	int e;
	while(cin >> e, e > 0){
		int mini = e;
		for(int z=0; z*z*z <= e; z++){
			for(int y=0; y*y <= e; y++){
				int x = e - z*z*z - y*y;
				if (x < 0) break;
				mini = min(mini, x+y+z);
			}
		}
		cout << mini << endl;
	}
	return 0;
}
