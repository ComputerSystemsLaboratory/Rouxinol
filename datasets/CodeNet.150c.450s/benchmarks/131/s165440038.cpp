#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

int nexta(int a, int L){
	stringstream ss;
	string s0;
	int min, max;
	ss << a;
	s0 = ss.str();
	s0.resize(L, '0');
	sort(s0.begin(), s0.end());
	min = atoi(s0.c_str());
	reverse(s0.begin(), s0.end());
	max = atoi(s0.c_str());
	return(max - min);
}



int main()
{
	int a0, L, a[21], i, j;
	bool flag;
	while (cin >> a0 >> L, (a0 || L)){
		a[0] = a0;
		flag = false;
		for (i = 1; i < 21; i++){
			a[i] = nexta(a[i - 1], L);
			for (j = 0; j < i; j++){
				if (a[i] == a[j]){
					flag = true;
					break;
				}
			}
			if (flag){
				cout << j << " " << a[i] << " " << i - j << endl;
				break;
			}
		}

	}
	return 0;
}