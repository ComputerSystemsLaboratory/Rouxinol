#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
using namespace std;

#define TEST 0
#if TEST
FILE *in = freopen("./q", "r", stdin);
FILE *out = freopen("./ans", "w", stdout);
#endif

int main(){
	int n; cin >> n;
	while (n--){
		int balls[10];
		for (int i = 0; i < 10; i++){
			cin >> balls[i];
		}

		int left = 0, right = 0;
		bool ok = true;
		for (int i = 0; i < 10; i++){
			int dleft = balls[i] - left;
			int dright = balls[i] - right;

			if (dleft <= 0 && dright <= 0){
				ok = false;
				break;
			}

			if (dleft <= 0){
				right = balls[i];
			}
			else if (dright <= 0){
				left = balls[i];
			}
			else if (dleft < dright){
				left = balls[i];
			}
			else{
				right = balls[i];
			}
		}

		cout << (ok ? "YES": "NO") << endl;

	}
	

#if TEST
	fclose(in);
	fclose(out);
#endif
}