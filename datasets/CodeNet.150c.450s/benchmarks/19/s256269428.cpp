#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

void swap(int*, int*);

int main(void) {
	vector<int> a, b;
	int j = 0;
	int tmp1, tmp2;
	
	while(1) {		
		cin >> tmp1 >> tmp2;
		a.push_back(tmp1);
		b.push_back(tmp2);
		if(a[j] == 0 && b[j] == 0) {
			break;
		}
		j++; 
	}
	
	for(int i = 0; i < a.size() - 1; i++) {
		if(a[i] > b[i]) {
			swap(a[i], b[i]);
		}
		cout << a[i] << " " << b[i] << endl;
	}
	
	return 0;
}
void swap(int *a, int *b) {
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}