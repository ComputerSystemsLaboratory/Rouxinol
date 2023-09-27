#include <iostream>

using namespace std;
int main(){
	int N;
	cin >> N;
	for(int i = 0; i < N; ++i){
		//read input data and test it
		bool ok = true;
		int a, b;
		a = b = 0;
		for(int j = 0; j < 10; ++j){
			int c;
			cin >> c;
			if(b > c){
				ok = false;
			}else if(a > c){
				b = c;
			}else{
				a = c;
			}
		}
		if(ok){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
}