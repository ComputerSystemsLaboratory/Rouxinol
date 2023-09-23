#include <iostream>
#define MAX_D 100

using namespace std;
int main(){
	int N;
	cin >> N;
	int d[MAX_D];
	long long wa[21] = {0};
	int n0;
	cin >> n0;
	wa[n0] = 1;
	for(int i = 1; i < N-1; ++i){
		int n;
		cin >> n;
		long long nextwa[21] = {0};
		for(int i = 0; i <= 20; ++i){
			if(wa[i]){
				if(i+n <= 20){
					nextwa[i+n] += wa[i];
				}
				if(i-n >= 0){
					nextwa[i-n] += wa[i];
				}
			}
		}
		for(int i = 0; i <= 20; ++i){
			wa[i] = nextwa[i];
		}
	}
	int nN;
	cin >> nN;
	cout << wa[nN] << endl;
}