#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	
	int input[10];
	
	for (int i=0; i<N; i++) {
		for (int j=0; j<10; j++) cin >> input[j];
		
		int a[11] = {0};
		int b[11] = {0};
		
		bool success = true;
		
		for (int j=0, a_top=1, b_top=1; j<10; j++) {
			if (a[a_top-1] < input[j]) a[a_top++] = input[j];
			else if (b[b_top-1] < input[j]) b[b_top++] = input[j];
			else { success = false; break; }
		}
		if (success) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	return 0;
}