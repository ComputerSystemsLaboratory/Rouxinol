#include<iostream>
#include<iomanip>
#include<cstdio>
#include<string>
#include<utility>
#include<cmath>
#include<queue>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
const ll INF = 2e9;
ll N,H,W,a,b,c,d,e;

ll A[20][5] = {};
bool f,ff;

queue<ll> qll[6];

int main() {

	while (true) {
		cin >> H;
		if (H == 0) {
			break;
		}
		e = 0;

		for (int i = 0; i < 20; i++) {
			for (int j = 0; j < 5; j++) {
				A[i][j] = -1;
			}
		}

		for (int i = 0; i < H; i++) {
			for (int j = 0; j < 5; j++) {
				cin >> A[H-1-i][4-j];
			}
		}

		d = H * 5;

		while (d > 0) {
			ff = true;
			for (int i = 0; i < H; i++) {

				a = 1;
				b = A[i][0];

				for (int j = 1; j < 5; j++) {
					if (A[i][j] == b && b > 0) {
						a++;
					}
					else {
						a = 1;
						b = A[i][j];
					}

					if (a >= 3) {
						if (j == 4) {
							e += a * b;
							d -= a;
							ff = false;
							for (int k = 0; k < a; k++) {
								A[i][j - k] = -1;
							}
							break;
						}
						else if (A[i][j + 1] != b) {
							e += a * b;
							d -= a;
							ff = false;
							for (int k = 0; k < a; k++) {
								A[i][j - k] = -1;
							}
							break;
						}
					}


				}
			}

			f = true;

			for (int i = 0; i < H; i++) {
				for (int j = 0; j < 5; j++) {
					if (A[i][j] != -1) {
						f = false;
					}
				}
			}

			if (f || ff)break;


			for (int j = 0; j < 5; j++) {
				for (int i = 0; i < H; i++) {
					if (A[i][j] != -1) {
						qll[j].push(A[i][j]);
					}
				}
			}

			for (int i = 0; i < 20; i++) {
				for (int j = 0; j < 5; j++) {
					A[i][j] = -1;
				}
			}

			for (int j = 0; j < 5; j++) {
				W = 0;
				while (!qll[j].empty())
				{
					A[W][j] = qll[j].front();
					W++;
					qll[j].pop();
				}
			}

		}

		cout << e << endl;

	}

	

}
