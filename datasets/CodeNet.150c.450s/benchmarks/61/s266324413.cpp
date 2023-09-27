#include <iostream>

using namespace std;

int main(){
	int N, A, B, C, X;
	while(cin >> N >> A >> B >> C >> X, N+A+B+C+X){
		int Y[N], time = -1, ran = X;
		for(int i = 0; i < N; ++i){
			cin >> Y[i];	
		}
		int j = 0;
		while(time <= 10000 && j != N){
			++time;
			if(ran == Y[j]) ++j;
			ran = (A * ran + B) % C;
		}
		if(time > 10000) time = -1;
		
		cout << time << endl;
	}	
}