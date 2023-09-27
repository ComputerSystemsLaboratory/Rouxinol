#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int calc(int, int, int);

int for2(int x,int i,int count,int sum){
	return x == -1 ?0 : calc(i, count - 1, sum + x) + for2(x - 1, i, count, sum);
}

int calc(int i, int count,int sum){
	return count == 0 ? sum == i : for2(9, i, count, sum);
}

int main(){
	int i;
	while (cin >> i){
		cout << calc(i, 4, 0) << endl;
	}
	return 0;
}