#include<iostream>
#include<vector>
#define N 20

using namespace std;

int main() {

	vector<char> str(20);

	int i = 0,j;

	while(cin >> str[i]){
		i++;
	}

	for(j = i-1;j >=0;j--){
		cout << str[j];
	}
	cout << endl;
	
	return 0;
}