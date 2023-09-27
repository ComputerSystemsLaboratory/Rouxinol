#include <iostream>
#include <algorithm>
#include <functional>
#include<vector>
#include<math.h>
#include<bitset>
#include<string>
#include <deque>
#include<queue>
#include<map>
#include<type_traits>

using namespace std;
int A[6][100];
int H;
int Y = 0;
void serch() {
	int t = 1;
	while (t) {
		t = 0;
	
		for (int i = 1; i <= H; i++) {
			int r = 1;
			for (int j = 1; j < 5; j++) {
				
				if (A[j][i] == A[j + 1][i]&&A[j][i]!=-1&&A[j][i]!=0) {
					
					r++;
				}
				else {
					if (r >= 3) {
						for (int R = 0; R < r; R++) {
							
							t++;
							Y += A[j - R][i];
					
							A[j - R][i] = -1;
						}
						break;
					}
					r = 1;
				}
				if (j == 4 && r >= 3) {
					for (int R = 0; R < r; R++) {
						t++;
					
						Y += A[j+1 - R][i];
						A[j+1 - R][i] = -1;
					}
				}
			

			}
		}

		int u = 1;
		while (u) {
			u = 0;
			for (int i = 0; i < H; i++) {
				for (int j = 1; j <= 5; j++) {
				
					if (A[j][H - i] == -1 && A[j][H - i - 1] == -1)u++;
					if (A[j][H - i] == -1) {
						if (A[j][H - i - 1] == 0) {
							A[j][H - i] = 0;
							goto ggo;
						}
						else {
							A[j][H - i] = A[j][H - i - 1];
							A[j][H - i - 1] = -1;
						}
					}
				}
			ggo:;
			}

		}

	}

}

int main() {
	
	cin >> H;
	while (H) {
		for (int i = 0; i < 100; i++){
			for (int j = 0; j < 6; j++) {
				A[j][i]=0;
			}
		}
		for (int i = 1; i <= H; i++) {
			for (int j = 1; j <= 5; j++) {
				cin >> A[j][i];
			}
		}

		serch();
		cout << Y<< endl;
		Y = 0;
		cin >> H;
	}
}
