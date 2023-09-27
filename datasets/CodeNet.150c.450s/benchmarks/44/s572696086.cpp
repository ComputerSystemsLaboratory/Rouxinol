#include<iostream>
using namespace std;
int main()
{
	int a[4];
	int b[4];
	int h=0, br=0;
	while (cin >> a[0] >> a[1] >> a[2] >> a[3]){
		h = 0, br = 0;
		for (int i = 0; i < 4; i++){
			cin >> b[i];
		}
		for (int i = 0; i < 4; i++){
			if (a[i] == b[i]){
				h++;
				a[i] = -1;
				b[i] = -1;
			}
		}
		for (int i = 0; i < 4; i++){
			for (int i2 = 0; i2 < 4; i2++){
				if (a[i] == b[i2]&&b[i2]!=-1){
					br++;
				}
			}
		}
		cout << h << " " << br << endl;
	}
}