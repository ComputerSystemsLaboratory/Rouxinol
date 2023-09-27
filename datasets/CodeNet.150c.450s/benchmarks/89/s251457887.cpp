#include <iostream>
#include <vector>
using namespace std;

#define MAX 1000000

bool v[MAX+1];

void set(int n){
	for (int i = n * 2; i < MAX; i += n){
		v[i] = true;
	}
}

int main(){
	int a,d,n;
	v[1] = true;
	for (int i = 2; i < MAX; i++){
		if (v[i]) continue;
		set(i);
	}

	while (1){
		cin >> a >> d >> n;
		if (a == 0 && d == 0 && n == 0) break;
		int cnt = 0;
		for (int i = a;; i += d){
			if (!v[i]) cnt++;
			if (cnt == n){
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}