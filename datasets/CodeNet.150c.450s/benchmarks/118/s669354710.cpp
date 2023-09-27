#include<iostream>
#define F(A, B) for(int A=0; A<B; A++)
using namespace std;

int main(){
	int n, all=0;

	for(int i=1; i<1000; i++){
		if(i%3 == 0){
			all += 200;
		}else{
			all += 195;
		}
	}
	cin >> n;
	F(i, n){
		int y, m, d;
		cin >> y >> m >> d;
		int pls=0;
		for(int i=1; i<y; i++){
			if(i%3 == 0){
				pls += 200;
			}else{
				pls += 195;
			}
		}
		for(int i=1; i<m; i++){
			if(y%3 == 0){
				pls += 20;
			}else if(i%2 == 0){
				pls += 19;
			}else{
				pls += 20;
			}
		}
		pls += d;
		cout << all-pls+1 << endl;
	}
}