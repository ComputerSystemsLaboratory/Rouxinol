#include<iostream>
using namespace std;
int main()
{
	bool p[1000000] = { false };
	int n;

	while (cin >> n){
		for (int i = 2; i <n ; i++){
			for (int i2 = 2; i*i2 <= n; i2++){
				p[i*i2] = true;
			}
		}
		p[2] = false;
		p[3] = false;
		int c = 0;
		for (int i = 2; i <= n; i++){
			if (!p[i])c++;
		}
		cout << c << endl;
	}
}