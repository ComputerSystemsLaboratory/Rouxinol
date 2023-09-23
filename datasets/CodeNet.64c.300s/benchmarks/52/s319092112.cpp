#include <iostream>

using namespace std;

bool initComb(bool* b, int n)
{
	if (n>10) return false;
	for (int i=0; i<n; i++) b[i] = true;
	return true;
}

bool nextComb(bool* b)
{
	int pos;
	int last_true_pos;
	for (pos=9; pos>=0; pos--) {
		if (!b[pos]) {
			last_true_pos = pos + 1;
			break;
		}
	}
	for (pos--; pos>=0; pos--) {
		if (b[pos]) {
			b[pos]   = false;
			b[pos+1] = true;
			if (last_true_pos < 10) {
				for (int i=last_true_pos; i<10; i++) b[i] = false;
				for (int i=0; i<10-last_true_pos; i++) b[i+pos+2] = true;
			}
			return true;
		}
	}
	return false;
}

int main()
{
	int n, s;
	
	while (true) {
		cin >> n >> s;
		if (n==0 && s==0) break;
		
		bool isMember[10] = {false};
		if ( !initComb(isMember, n) ) {
			cout << 0 << endl;
			continue;
		}
		
		int count = 0;
		
		do {
			int sum = 0;
			for (int i=0; i<10; i++) sum += isMember[i] ? i : 0;
			if (sum == s) { 
				//for (int i=0; i<10; i++) {
				//	if (isMember[i]) cout << i << " ";
				//}
				//cout << endl;
				count++;
			}
		} while ( nextComb(isMember) );
		
		cout << count << endl;
	}
	
	return 0;
}