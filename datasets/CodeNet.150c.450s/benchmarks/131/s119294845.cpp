#include <iostream>

using namespace std;

int search(int* a, int N, int* s) {
	for(int i = 0; i < N; i++) {
		for(int j = i+1; j < N; j++) {
			if(a[i] == a[j]) {
				*s = j - i;
				return i;
			}
		}
	}
	return -1;
}

int main(void) {
	
	while(true) {
		int L, N = 21;
		int* a = new int[N];
		int i = 0, j;
		
		cin >> a[0] >> L;
		if(a[0] == 0 && L == 0) break;
		//cout << a[0] << ", " << L << endl;
		
		for(i = 1; i < N; i++) {
			int* n = new int[L];
			int ai = a[i-1], min = 0, max = 0;

			for(int k = 0; k < L; k++, ai /= 10) {
				int tmp = ai % 10;
				//cout << tmp << " ";
				int h;
			
				for(h = 0; h < k && n[h] <= tmp; h++) ;
				if(h != k) {
					int tmp2 = n[h];
					n[h] = tmp;
					tmp = tmp2;
					//ai = ai / 10;
			
					for(h++; h < k; h++) {
						tmp2 = n[h];
						n[h] = tmp;
						tmp = tmp2;
					}
				}
				n[h] = tmp;
			}
			
			//cout << endl;
			for(/*min = 0, */int k = 0; k < L; k++) {
				min = min * 10 + n[k];
			}
			//cout << min << endl;
			for(/*max = 0, */int k = L-1; k >= 0; k--) {
				max = max * 10 + n[k];
				//cout << n[k];// << endl;
			}
			//cout << max << endl;
		
			//i++;
			a[i] = max - min;
			//cout << i << ": " << max << "-" << min << "= " << a[i] << endl;
			if(a[i-1] == a[i]) {
				N = i+1;
				break;
			}
		}
		
		int s;
		j = search(a, N, &s);
		cout << j << " ";
		cout << a[j] << " " << s << endl;
	}

	return 0;
}