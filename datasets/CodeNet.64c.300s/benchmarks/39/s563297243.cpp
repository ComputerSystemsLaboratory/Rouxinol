#include<iostream>
using namespace std;

int main()
{
	int n,nn=0;
	int countdata [100];

	while (cin >> n) {
		int count = 0;
		for (int a = 0; a <= 9; a++) {
			for (int b = 0; b <= 9; b++) {
				for (int c = 0; c <= 9; c++) {
					for (int d = 0; d <= 9; d++) {
						if (a + b + c + d == n) {
							count++;
						}
					}
				}
			}
		}
		countdata[nn] = count;
		nn++;
	}
	for (int a=0;a<nn;a++)
		cout << countdata[a] << endl;
}