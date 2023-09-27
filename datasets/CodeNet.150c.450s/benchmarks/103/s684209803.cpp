#include <iostream>
using namespace std;

int main()
{
	int n, s, count = 0,count2 = 0;
	int ans[100], data[100];
	while (1) {
		cin >> n >> s;
		if (n == 0 && s == 0)
			break;
		for (int a = 0; a <= 9; a++) {
			if (n == 1) {
				if (a == s)
					count2++;
			}
			for (int b = a+1; b <= 9; b++) {
				if (n == 2) {
					if (a + b == s)
						count2++;
				}
				for (int c = b+1; c <= 9; c++) {
					if (n == 3) {
						if (a + b + c == s)
							count2++;
					}
					for (int d = c+1; d <= 9; d++) {
						if (n == 4) {
							if (a + b + c + d == s)
								count2++;
						}
						for (int e = d+1; e <= 9; e++) {
							if (n == 5) {
								if (a + b + c + d + e == s)
									count2++;
							}
							for (int f = e+1; f <= 9; f++) {
								if (n == 6) {
									if (a + b + c + d + e + f == s)
										count2++;
								}
								for (int g = f+1; g <= 9; g++) {
									if (n == 7) {
										if (a + b + c + d + e + f + g == s)
											count2++;
									}
									for (int h = g+1; h <= 9; h++) {
										if (n == 8) {
											if (a + b + c + d + e + f + g + h == s)
												count2++;
										}
										for (int i = h+1; i <= 9; i++) {
											if (n == 9) {
												if (a + b + c + d + e + f + g + h + i == s)
													count2++;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		ans[count] = count2;
		count2 = 0;
		count++;
	}
	for (int i = 0; i < count; i++)
		cout << ans[i] << endl;
}