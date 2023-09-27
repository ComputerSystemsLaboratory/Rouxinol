#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main(){
	int i;
	int line[5];
	cin >> line[0] >> line[1] >> line[2] >> line[3] >> line[4] ;
	sort(line,line+5,greater<int>());
	for(i=0;i<4;i++){
		cout << line[i] << " " ;
	}
	cout << line[4] << endl;
}