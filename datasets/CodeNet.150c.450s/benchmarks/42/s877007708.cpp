#include <iostream>
#include <string>
using namespace std;

struct foo {
	string s;
	int a;
};

int main(){
	int n, v, time = 0;
	foo f[100000];
	cin >> n >> v;
	for (int i = 0; i < n; i++) {
		cin >> f[i].s >> f[i].a;
	}
	int j = n, b = 0, flag = n;
	while (flag > 0) {
		f[b].a -= v,time += v;
		if (f[b].a > 0) {
			f[b+j] = f[b];
		}else {
			time += f[b].a, j--, flag--;
			cout << f[b].s << " " << time << endl;
		}
		b++;
		if (b > 99999)b = 0;
		if (j + b > 99999)j -= 100000;
		if (j + b < 0)j += 100000;
	}

	return 0;
}