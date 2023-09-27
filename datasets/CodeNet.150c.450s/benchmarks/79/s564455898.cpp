#include <iostream>
using namespace std;

const int N = 50;
int d[N], t[N];

int main(){
	int n, r, p, c;
	while(cin >> n >> r, n){
		for(int i = 0;i < n;++i){
			d[i] = n - i;
			t[i] = 0;
		}
		for(int i = 0;i < r;++i){
			cin >> p >> c;
			for(int j = 0;j < n;++j){
				if(j < c){
					t[j] = d[p - 1 + j];
				}
				else if(j < p - 1 + c){
					t[j] = d[j - c];
				}
				else{
					t[j] = d[j];
				}
			}
			for(int j = 0;j < n;++j){
				d[j] = t[j];
				t[j] = 0;
			}
		}
		cout << d[0] << endl;
	}
	return 0;
}