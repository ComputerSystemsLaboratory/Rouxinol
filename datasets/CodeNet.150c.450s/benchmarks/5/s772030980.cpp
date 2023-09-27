#include <iostream>
#include <vector>

using namespace std;

int main(void){
	int N;
	cin >> N;
	vector<int> v(N);
	for(int i = 0; i < N; i++ ){
		cin >> v[i];
	}
	for(int j = 0; j < N; j++ ){
		cout << v[N-1-j];
		if( j == (N-1)) cout << endl;
		else cout << " ";
	}
	

	return 0;
}