#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int nn = n;
	cout << n << ":";
	bool cnt = true;
	while (1){
		if (n % 2 == 0){
			cout << " " << 2;
			n /= 2;
			cnt = false;
		}
		else break;
	}
	while (1){
		if (n % 3 == 0){
			cout << " " << 3;
			n /= 3;
			cnt = false;
		}
		else break;
	}
	for (int i = 3; i <= nn; i += 2){
		bool gouseisuu = false;
		for (int j = 3; j <=i; j += 2){
			if (i%j == 0){
				gouseisuu = true;
				break;
			}
			if (!gouseisuu){
				while (1){
					if (n%i == 0){
						cout << " " << i;
						n /= i;
						cnt = false;
					}
					else break;
				}
			}
		}
		if (n == 1)break;
		if (n == nn && cnt == true && i >= sqrt(n))break;
	}
	if (cnt)cout << " " << nn;
	cout << endl;
}