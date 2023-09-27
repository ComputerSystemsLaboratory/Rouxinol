// AOJ 2194

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n, a, b, c, x;

	while (cin >> n >> a >> b >> c >> x){
		if (n == 0) break;
		vector <int> reel(n);
		for (int i = 0; i < n; i++){
			cin >> reel[i];
		}

		int now = 0, old = x, next = 0;
		if (reel[0] == x){
			now++;
		}
		if (n == now){
			cout << 0 << endl;
			goto END;
		}
		for (int i = 1; i <= 10000; i++){
			next = (a * old + b) % c;
			if (reel[now] == next){
				now++;
				if (now == n){
					cout << i << endl;
					goto END;
				}
			}
			old = next;
		}
		cout << "-1" << endl;
		
		END:;
	}

	return 0;
}