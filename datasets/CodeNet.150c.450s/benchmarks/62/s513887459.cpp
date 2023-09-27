#include <algorithm>
#include <iostream>
using namespace std;
#define SEQ 3

int main(){
	int table[SEQ];
	int i;
	cin >> table[0] >> table[1] >> table[2];
	sort(table, table+SEQ);
	for (i = 0; i < SEQ-1; i++){
		cout << table[i] << " ";
	}
	cout << table[SEQ-1] << endl;
	return 0;
}