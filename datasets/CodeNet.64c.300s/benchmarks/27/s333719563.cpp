#include <iostream>

using namespace std;

inline int max(int x, int y){
	return x > y ? x : y;
}

inline int min(int x, int y){
	return x < y ? x : y;
}

int main(){
	int n, x, sum23, count = 0;
	for(;;){
		cin >> n >> x;
		if(n == 0) return 0;
		count = 0;
		int sup = min(n, x/3-1);
		int inf = x - 2*n + 1;
		if(inf < 1) inf = 1;
		for(int i1 = inf; i1 <= sup; i1++){
			sum23 = x - i1;
			int d = (sum23-1)/2 - max(i1, sum23-n-1);
			if(d > 0) count += d;
		}
		cout << count << endl;
	}
}