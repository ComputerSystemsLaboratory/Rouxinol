#include <iostream>

using namespace std;

int main(){
	int N, A, B, C, X;
	int Y[100];		
	while(cin >> N >> A >> B >> C >> X, N){
		for(int i=0;i<N;i++) cin >> Y[i];
		int idx = 0;
		int res = -1;
		for(int turn=0;turn<=10000;turn++){
			if(X == Y[idx]) ++idx;
			if(idx == N){
				res = turn;
				break;
			}
			X = (A*X+B)%C;
		}
		cout << res << endl;
	}
}