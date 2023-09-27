#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
typedef unsigned int ui;
//using ui = unsigned int;

int main(void)
{
	string line;
	ui max_n, max_w;
	cin >> max_n >> max_w;
	ui v, w;

	vector<ui> table(max_w+1, 0);

	for(int i = 1; i <= max_n; ++i){
		cin >> v >> w;
		for(int j = max_w-w; j >= 1; --j){
			if(table[j] != 0 && table[w+j] < table[j] + v)
				table[w+j] = table[j] + v;
		}
		if(w <= max_w && table[w] < v)
			table[w] = v;
	}
	cout << *(max_element(begin(table), end(table))) << endl;

}