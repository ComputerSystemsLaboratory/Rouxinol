#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	cin >> n;
	string x;
	for(int i = 1; i <= n; i++){
		x = to_string(i);
		if( i%3 == 0){
			cout << " " << i;
			continue;
		}
		if( x.find("3",0) != string::npos){
			cout << " " << i;
		}
	}
	cout << endl;
	return 0;
}