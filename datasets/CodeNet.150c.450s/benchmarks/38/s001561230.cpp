#include<iostream>
#include<algorithm>
using namespace std;
int N;
int x[3];
int main(){
	cin >> N;
	while (N>0){
		for (int i = 0; i<3; i++){
			cin >> x[i];
		}
		sort(x, x + 3);
		if (x[2] *x[2] == (x[1] *x[1]) + (x[0] *x[0])){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
		N--;
	}
	return 0;
}