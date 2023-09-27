#include <iostream>
using namespace std;

int main(){
	int N,A,B,C,X;
	while (cin >> N >> A >> B >> C >>X){
		if (N+A+B+C+X == 0){
			break;
		}
		int Y[N];
		int frame = 0;
		for (int i = 0; i <= N-1; i++){
			cin >> Y[i];
		}
		int i = 0;
		for (int frame = 0; frame <= 10000; frame++){
		    if(X == Y[i]){
				i++;
			}
			X = ((A*X+B)%C);
			
			if (i == N){
				cout << frame << endl;
				break;
			}
			if (frame == 10000){
				cout << -1 << endl;
			}
		}
	}
}