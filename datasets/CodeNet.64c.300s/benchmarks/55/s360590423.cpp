#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {
	int input;
	int count = 1;
	
	while(1){
		cin >> input;
		if(input == 0) break;
		cout << "Case " << count << ": " << input << endl;
		count += 1;
	}
	
	return 0;
}